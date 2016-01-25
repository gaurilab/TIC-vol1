/*
PtoR
1.dynamic_cast can be used only with pointers and references to objects
2.its purpose is to ensure that the result of the type conversion is a valid complete object of the requested class.
3.dynamic_cast is always successful when we cast a class to one of its base classes


*/

#include <iostream>
#include <exception>
using namespace std;

class Base { 
public:
virtual ~Base() {
	printf("\n virtual destructor of Base called \n ");
} 
};

class Derived: public Base {
 int a;
public:
virtual ~Derived(){
}
 };

int main () {

	Base b;
	Derived d;

	//Base &br = b;
	Base &br = d;
	
	try {
		Derived &dr = dynamic_cast<Derived&>(br);
	}
#if 0

  try {
    Base * pba = new Derived;
    Base * pbb = new Base;
    Derived * pd;

    pd = dynamic_cast<Derived*>(pba);
    if (pd==0) cout << "Null pointer on first type-cast" << endl;

    pd = dynamic_cast<Derived*>(pbb);
    if (pd==0) cout << "Null pointer on second type-cast" << endl;

  } 
#endif
catch (exception& e) {cout << "Exception: " << e.what();}
  return 0;
}
