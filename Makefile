CC      = gcc
CFLAGS  = -g -Wall -Wextra
TARGET  = app
OBJS    = calc.o main.o

$(TARGET): $(OBJS)
	$(CC) $^ -o $@

%.o: %.c calc.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJS)

.PHONY: clean
