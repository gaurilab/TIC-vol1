/*
Create two classes, A and B, with default constructors
that announce themselves. Inherit a new class called C
from A, and create a member object of B in C, but do not
create a constructor for C. Create an object of class C and
observe the results.
*/
#include <iostream>
using namespace std;

class A{
public:
	A()
	{
	cout<<"Calling function "<<__func__<<endl;
	}
};
class B{
public:
	B()
	{
	cout<<"Calling function "<<__func__<<endl;
	}
};

class C: public A{
public:
B b;
};

int main()
{
C c;
}
