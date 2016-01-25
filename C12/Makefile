objects=exercise1 exercise2 exercise3 exercise3_mod exercise4 exercise5 exercise7 exercise8 exercise9 exercise10 exercise11 exercise13 exercise14 exercise15 exercise16 PointertoMember SmartPointer CopyingWithPointers exercise23 exercise28 exercise29 exercise30 exercise31 ReflexivityInOverloading exercise32

all:${objects}
%:%.cpp
	g++ -g -Wall -Wextra $< -o $@

exercise32:exercise32.cpp
	 g++ -g -Wall -Wextra $< -S
clean:
	rm -f ${objects}
