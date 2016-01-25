/*
   In CopyConstructor.cpp, inherit a new class from Child
   and give it a Member m. Write a proper constructor,
   copy-constructor, operator=, and operator<< for
   ostreams, and test the class in main( ).
 */



#include <iostream>
using namespace std;
class Parent {
	int i;
	public:
	Parent(int ii) : i(ii) {
		cout << "Parent(int ii)\n";
	}
	Parent(const Parent& b) : i(b.i) {
		cout << "Parent(const Parent&)\n";
	}
	Parent() : i(0) { cout << "Parent()\n"; }
	friend ostream&
		operator<<(ostream& os, const Parent& b) {
			return os << "Parent: " << b.i << endl;
		}
};
class Member {
	public:
	int i;
	Member(int ii) : i(ii) {
		cout << "Member(int ii)\n";
	}
	Member(const Member& m) : i(m.i) {
		cout << "Member(const Member&)\n";
	}
	friend ostream&
		operator<<(ostream& os, const Member& m) {
				return os << "Member: " << m.i << endl;
		}
};
class Child : public Parent {
	int i;
	Member m;
	public:
	Child(int ii) : Parent(ii), i(ii), m(ii) {
		cout << "Child(int ii)\n";
	}

	Child(const Child& c) : m(c.m),i(c.i),Parent(c){
		cout << "Child(const Child&)\n";
	}
	friend ostream&
		operator<<(ostream& os, const Child& c){
			return os << (Parent&)c << c.m
				<< "Child: " << c.i << endl;
		}
};

class granchild:public Child{
	Member m;
	public:
	granchild (int ii) : Child(ii) , m(ii) {
		cout << "GrandChild(int ii)\n";
	}
#if 1
	granchild(const granchild &gc):m(gc.m),Child(gc)
	{
		cout << "GrandChild(const granchild &gc )\n";
			
	}
#endif
	friend ostream&
		operator<<(ostream& os, const granchild& c){
			return os <<  (Child&)c << "GrandChild: " << c.m << endl;
		}

};

int main() {
#if 0
	Child c(2);
	cout << "calling copy-constructor: " << endl;
	Child c2 = c; // Calls copy-constructor
	cout << "values in c2:\n" << c2;
#endif
	granchild gc(5);
	granchild gc2=gc;
	cout << "values in gc2:\n" << gc2;
} ///:~
