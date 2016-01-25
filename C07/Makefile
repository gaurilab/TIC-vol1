objects=exercise1 exercise2 exercise3.s exercise4 exercise5 exercise6

all:${objects}

exercise3.s: exercise2.cpp
	g++ -S -Wall -Wextra $< -o $@ 
	
%:%.cpp
	g++ -g -Wall -Wextra $< -o $@	

clean:
	rm -f ${objects}
