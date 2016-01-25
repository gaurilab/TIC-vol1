CC=g++
C=gcc

INCLUDES=.

CCFLAGS= -g -Wall -Wextra

all:exercise5 exercise5_variant
OBJ=exercise5 exercise5_variant


exercise5_variant:exercise5_variant.cpp
	${CC} ${CCFLAGS} $< -o $@

exercise5:exercise5.cpp
	${CC} ${CCFLAGS} $< -o $@
clean:
	rm -f ${OBJ}
