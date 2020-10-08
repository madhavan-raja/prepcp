#include <stdio.h>
#include <string.h>
#include <windows.h>

#define TEMPLATE "C:\\prepcp\\template.cpp"
#define INPUT_FILE "input.txt"

int main(int argc, char* argv[])
{
    char path[100], inpPath[100];
    char ch;

    FILE *src, *tgt, *inp;

    for (int i = 1; i < argc; ++i)
    {
        printf("[%d/%d]: %s\t\t", i, argc - 1, argv[i]);
        CreateDirectory(argv[i], NULL);

        strcpy(path, argv[i]);
        strcat(path, "\\");
        strcat(path, argv[i]);
        strcat(path, ".cpp");

        strcpy(inpPath, argv[i]);
        strcat(inpPath, "\\");
        strcat(inpPath, INPUT_FILE);

        src = fopen(TEMPLATE, "r");
        tgt = fopen(path, "w");

        while ((ch = fgetc(src)) != EOF)
            fputc(ch, tgt);
        printf("Written to %s\t\t", path);

        inp = fopen(inpPath, "w");
        printf("Made %s\t\t", inpPath);

        fclose(src);
        fclose(tgt);
        fclose(inp);

        printf("Finished for %s\n", argv[i]);
    }

    printf("Finished everything.\n");

    return 0;
}
