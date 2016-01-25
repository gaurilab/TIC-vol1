/*

   Modify C14:Combined.cpp so that f( ) is virtual in the
   base class. Change main( ) to perform an upcast and a
   virtual call

 */


//: C14:Combined.cpp
// Inheritance & composition
#include <iostream>
using namespace std;

class A {
	int i;
	public:
	A(int ii) : i(ii) {}
	~A() {}
	void f() const {cout<<"Calling A::"<<__func__<<endl;}
};
class B {
	int i;
	public:
	B(int ii=0) : i(ii) {}
	virtual ~B() {}
	virtual void f() const {cout<<"Calling B::"<<__func__<<endl;}
	
};
class C : public B {
	A a;
	public:
	C(int ii) : B(ii), a(ii) {}
	virtual ~C() {} // Calls ~A() and ~B()
	void f() const { // Redefinition
cout<<"Calling C::"<<__func__<<endl;
		a.f();
		B::f();
	}
};
int main() {
	C c(47);
	B &bp=c;
	bp.f();
	cout<<"-------------------------"<<endl;
	B b;
	
	b.f();
} ///:~
