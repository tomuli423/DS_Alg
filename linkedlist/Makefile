CC = gcc
CFLAGS = -Wall

main: main.c linkedlist.o
	${CC} main.c linkedlist.o ${CFLAGS} -o $@

#main: main.o linkedlist.o
#	${CC} main.o linkedlist.o ${CFLAGS} -o $@

linkedlist.o: linkedlist.h

#%.o: %.c linkedlist.h
#	${CC} $< ${CFLAGS} -c
.PHONY: clean
clean:
	@rm -rf *.o
