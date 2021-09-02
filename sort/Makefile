CC = gcc
CFLAGS = -Wall

main: main.o sort.o
	${CC} main.o sort.o ${CFLAGS} -o $@

%.o: %.c sort.h
	${CC} $< ${CFLAGS} -c

.PHONY: clean
clean:
	@rm -rf *.o
