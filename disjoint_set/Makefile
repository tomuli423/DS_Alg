CC = gcc
CFLAGS = -Wall

main: main.c disjoint_set.o
	${CC} main.c disjoint_set.o ${CFLAGS} -o $@
disjoint_set.o: disjoint_set.h

.PHONY: clean
clean:
	@rm -rf *.o
