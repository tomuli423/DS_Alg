CC = gcc
CFLAGS = -Wall

main: main.c hash.o
	${CC} main.c hash.o ${CFLAGS} -o $@

hash.o: hash.h

.PHONY: clean
clean:
	@rm -rf *.o
