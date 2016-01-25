CC=g++

INCLUDES= -I.

CCFLAGS= -g -Wall -Wextra ${INCLUDES}

all: out 

out: derived1.cpp derived2.cpp 
	${CC} ${CCFLAGS} $< -o $@
clean:
	rm -f out
