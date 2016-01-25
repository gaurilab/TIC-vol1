/*Modify Combined.cpp to add another level of
inheritance and a new member object. Add code to show
when the constructors and destructors are being called.*/

//: C14:Combined.cpp
// Inheritance & composition
#include <iostream>
using namespace std;
class X{
	public:
	X(){cout<<"Calling function "<<__func__<<endl;}
	~X(){cout<<"Calling function "<<__func__<<endl;}
};
class A:public X {
int i;
public:
A(int ii) : i(ii) {cout<<"Calling function "<<__func__<<"(int ii)"<<endl;}
void f() const {}
	public:
	A(){cout<<"Calling function "<<__func__<<endl;}
	~A(){cout<<"Calling function "<<__func__<<endl;}
};
class B {
int i;
public:
B(int ii) : i(ii) {cout<<"Calling function "<<__func__<<"(int ii)"<<endl;}
	public:
	B(){cout<<"Calling function "<<__func__<<endl;}
	~B(){cout<<"Calling function "<<__func__<<endl;}
void f() const {}
};
class C : public B {
A a;
public:
C(int ii) : B(ii), a(ii) {}
~C() {} // Calls ~A() and ~B()
void f() const { // Redefinition
a.f();
B::f();
}
};
int main() {
C c(47);
} ///:
