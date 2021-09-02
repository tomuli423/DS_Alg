CC = gcc
CFLAGS = -Wall

main: main.c stack.o
	${CC} main.c stack.o ${CFLAGS} -o $@

stack.o: stack.h

.PHONY: clean
clean:
	@rm -rf *.o
