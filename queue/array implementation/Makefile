CC = gcc
CFLAGS = -Wall

main: main.c queue.o
	${CC} main.c queue.o ${CFLAGS} -o $@

queue.o: queue.h

.PHONY: clean
clean:
	@rm -rf *.o
