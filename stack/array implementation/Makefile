CC = gcc
CFLAGS = -Wall

main: main.o stack.o
	${CC} main.o stack.o ${CFLAGS} -o $@

%.o: %.c stack.h
	${CC} $< ${CFLAGS} -c

.PHONY: clean
clean:
	@rm -rf *.o
