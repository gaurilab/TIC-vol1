
objects=exercise1 exercise4a exercise4b exercise5 exercise6 

all:${objects}


%:%.c
	gcc -g  -Wall -Wextra  $< -o $@
%:%.cpp
	g++ -g  -Wall -Wextra  $< -o $@

exercise4:
	g++ -g  -Wall -Wextra exercise4a.cpp exercise4b.cpp -o exercise4

clean:
	rm -f ${objects}


