objects=ex1 ex2 ex3 ex4 ex5 ex6 ex7 ex8 ex9


all:${objects}

%:%.cpp
	g++ -g -Wall -Wextra $< -o $@

clean:
	rm -f ${objects}
