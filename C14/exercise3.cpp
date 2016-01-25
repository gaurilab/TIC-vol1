/*Create a three-level hierarchy of classes with default
constructors, along with destructors, both of which
announce themselves to cout. Verify that for an object of
the most derived type, all three constructors and
destructors are automatically called. Explain the order in
which the calls are made.*/

#include <iostream>
using namespace std;

class A{
public:
	~A()
	{
	cout<<"Calling function "<<__func__<<endl;
	}
	A()
	{
	cout<<"Calling function "<<__func__<<endl;
	}
};
class B:public A{
public:
	B()
	{
	cout<<"Calling function "<<__func__<<endl;
	}
	~B()
	{
	cout<<"Calling function "<<__func__<<endl;
	}
};

class C: public B{
public:
	C()
	{
	cout<<"Calling function "<<__func__<<endl;
	}
	~C()
	{
	cout<<"Calling function "<<__func__<<endl;
	}

};

int main()
{
C c;
}
