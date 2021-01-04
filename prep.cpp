#include <stdio.h>
#include <string.h>
#include <windows.h>

#define CODE_TEMPLATE_PATH "C:\\prepcp\\_CODE_TEMPLATE"
#define MAKEFILE_TEMPLATE_PATH "C:\\prepcp\\_MAKEFILE_TEMPLATE"
#define INPUT_FILE_NAME "input.txt"

int main(int argc, char* argv[])
{
  char codePath[100], makefilePath[100], inputPath[100];
  char ch;

  FILE *codeSrc, *codeTgt, *mfSrc, *mfTgt, *inp;

  for (int i = 1; i < argc; ++i) {
    printf("[%d/%d]: %s - ", i, argc - 1, argv[i]);
    CreateDirectory(argv[i], NULL);

    strcpy(codePath, argv[i]);
    strcat(codePath, "\\");
    strcat(codePath, argv[i]);
    strcat(codePath, ".cpp");

    strcpy(inputPath, argv[i]);
    strcat(inputPath, "\\");
    strcat(inputPath, INPUT_FILE_NAME);

    strcpy(makefilePath, argv[i]);
    strcat(makefilePath, "\\");
    strcat(makefilePath, "Makefile");

    codeSrc = fopen(CODE_TEMPLATE_PATH, "r");
    codeTgt = fopen(codePath, "w");

    while ((ch = fgetc(codeSrc)) != EOF)
      fputc(ch, codeTgt);
    // printf("CODE_TEMPLATE_PATH DONE. ");

    fclose(codeSrc);
    fclose(codeTgt);

    mfSrc = fopen(MAKEFILE_TEMPLATE_PATH, "r");
    mfTgt = fopen(makefilePath, "w");

    while ((ch = fgetc(mfSrc)) != EOF) {
      if (ch != '%')
        fputc(ch, mfTgt);
      else
        fputs(argv[i], mfTgt);
    }
    // printf("MAKEFILE_TEMPLATE_PATH DONE. ");

    fclose(mfSrc);
    fclose(mfTgt);

    inp = fopen(inputPath, "w");
    // printf("INPUT DONE. ");

    fclose(inp);

    // printf("Finished %s.\n", argv[i]);
    printf("Done\n");
  }

  printf("Finished\n");

  return 0;
}
