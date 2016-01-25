CC=g++
objects= exercise1 exercise2 exercise3 exercise4 exercise9 exercise11 exercise14  exercise15  exercise17 ex18 ex19 ex20 ex21 ex22 ex23 ex25 ex27 ex26
all: ${objects}

%:%.cpp
	${CC} -g -Wall -Wextra $< -o $@

exercise11: PStash.h PStash.cpp PStashTest.cpp exercise11.hpp
	${CC} -g -Wall -Wextra -I.  -c PStash.cpp -o PStash
	${CC} -g -Wall -Wextra -I.  -c PStashTest.cpp -o PStashTest
	${CC} -g  PStash PStashTest  -o exercise11


clean:
	rm -f ${objects} PStash PStashTest 
