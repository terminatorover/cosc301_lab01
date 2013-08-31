.PHONY: clean

CC=clang
CFLAGS=-I. -g -Wall
OBJS=lab01.o main.o
TARGET=lab01
DEPS=lab01.h

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $^ $(CFLAGS)

clean:
	rm -f $(TARGET) $(OBJS) *~

%.o: %.c $(DEPS)
	$(CC) -c $< $(CFLAGS) 
