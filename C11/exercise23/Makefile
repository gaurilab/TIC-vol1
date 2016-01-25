CC=g++
C=gcc

INCLUDES=-I.

CCFLAGS= -g -Wall -Wextra ${INCLUDES}

all:exercise23 exercise23test exercise23.exe
OBJ=exercise23 exercise23test exercise23.exe


exercise23 :exercise23.cpp
	${CC} ${CCFLAGS} -c  $< -o $@
exercise23test :exercise23test.cpp
	${CC} ${CCFLAGS} -c  $< -o $@

exercise23.exe:exercise23 exercise23test
	${CC} ${CCFLAGS}  exercise23 exercise23test    -o $@

clean:
	rm -f ${OBJ}
