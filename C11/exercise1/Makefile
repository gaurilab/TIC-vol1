CC=g++
C=gcc

INCLUDES=.

CCFLAGS= -g -Wall -Wextra

all:exercise1_c exercise1_cpp 
OBJ=exercise1_c exercise1_cpp
exercise1_c:exercise1.c 
	${C} ${CCFLAGS} $< -o $@

exercise1_cpp:exercise1.cpp
	${CC} ${CCFLAGS} $< -o $@
clean:
	rm -f ${OBJ}
