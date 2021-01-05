CC = gcc

CFLAGS = -o $(TARGET)

TARGET = prep

$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) $(TARGET).c

clean:
	$(RM) $(TARGET)
