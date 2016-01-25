objects=ex31

all:${objects}

%:%.cpp
	g++ -g -Wall -Wextra $< -o $@

ex31:
	 g++ -g -Wall -Wextra -c ex31_1.cpp -o ex31_1
	 g++ -g -Wall -Wextra -c ex31_2.cpp -o ex31_2
	 g++ -g -Wall -Wextra -c  ex31_3.cpp -o ex31_3
	 g++ -g -Wall -Wextra -c ex31_4.cpp -o ex31_4
	 g++ -g -Wall -Wextra -c ex31_5.cpp -o ex31_5
	 g++ -g -Wall -Wextra ex31_1 ex31_4 ex31_2 ex31_3 ex31_5  -o ex31 
clean:
	rm -f ${objects} ex31_1 ex31_2  ex31_3 ex31_4 ex31_5 
