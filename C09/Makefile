objects= exercise1 exercise2 exercise3 exercise4 exercise5  exercise6 exercise21

all:${objects}
CC=g++
CC_FLAGS=-g -Wall -Wextra

%:%.cpp
	${CC} ${CC_FLAGS} $< -o $@
exercise6:
	 ${CC} exercise6.cpp  exercise6a.cpp -o exercise6

clean:
	rm -f ${objects}
