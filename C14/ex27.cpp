/*
This exercise creates the design pattern called proxy. Start
with a base class Subject and give it three functions: f( ),
g( ), and h( ). Now inherit a class Proxy and two classes
Implementation1 and Implementation2 from Subject.
Proxy should contain a pointer to a Subject, and all the
member functions for Proxy should just turn around and
make the same calls through the Subject pointer. The
Proxy constructor takes a pointer to a Subject that is
installed in the Proxy (usually by the constructor). In
main( ), create two different Proxy objects that use the
two different implementations. Now modify Proxy so
that you can dynamically change implementations.
*/
#include <iostream>
class Subject{
public:
	void f() const{std::cout<<"Calling Subject::"<<__func__<<std::endl;}
	void g() const{std::cout<<"Calling Subject::"<<__func__<<std::endl;}
	void h() const{std::cout<<"Calling Subject::"<<__func__<<std::endl;}
};

class Proxy:public Subject{
private:
	Subject* ptrToSubject;
public:
	Proxy(Subject *ps):ptrToSubject(ps){}
};

class Implementation1:public Subject{
};
class Implementation2:public Subject{
};

int main()
{
}
