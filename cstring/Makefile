CC = gcc
CFLAGS = -Wall

main: main.c cstring.o
	${CC} main.c cstring.o ${CFLAGS} -o $@

#main: main.o linkedlist.o
#	${CC} main.o linkedlist.o ${CFLAGS} -o $@

cstring.o: cstring.h

#%.o: %.c linkedlist.h
#	${CC} $< ${CFLAGS} -c
.PHONY: clean
clean:
	@rm -rf *.o
