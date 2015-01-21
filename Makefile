CC = gcc
CFLAGS = -Wall -MMD -std=c99
EXEC = stack
OBJECTS = main.o stack.o
DEPENDS = ${OBJECTS:.o.d}

${EXEC}: ${OBJECTS}
	${CC} ${CFLAGS} ${OBJECTS} -o ${EXEC}

-include ${DEPENDS}

.PHONY: clean

clean:
	rm ${OBJECTS} ${EXEC} ${DEPENDS}
