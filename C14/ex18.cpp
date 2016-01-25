//: C14:Protected.cpp
// The protected keyword

/*
In Protected.cpp, add a member function in Derived that
calls the protected Base member read( ).
*/
#include <fstream>
using namespace std;
class Base {
	int i;
	protected:
	int read() const { return i; }
	void set(int ii) { i = ii; }
	public:
	Base(int ii = 0) : i(ii) {}
	int value(int m) const { return m*i; }
};
class Derived : public Base {
	int j;
	public:
	Derived(int jj = 0) : j(jj) {}
	void change(int x) { set(x); }
	int dread() const { return Base::read(); }
};

int main() {
	Derived d;
	d.change(10);
	d.dread();
} ///:~
