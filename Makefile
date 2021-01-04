CC = gcc

CFLAGS = -o $(TARGET)

TARGET = prep

$(TARGET): $(TARGET).cpp
	$(CC) $(CFLAGS) $(TARGET).cpp

clean:
	$(RM) $(TARGET)
