
/*Use private and protected inheritance to create two new
classes from a base class. Then attempt to upcast objects
of the derived class to the base class. Explain what
happens
*/

class Base{
};

class Derived1:protected Base{
};
class Derived2:private Base{
};

int main()
{
	Derived2 d2;
	Derived1 d1;
	Base b1;
	Base b2;
	Base b3;
	Base b4;
	Base b5;
	Derived2 *pd2=new Derived2();
	Derived1 *pd1=new Derived1();
	Base *pb1;
	//pb1=pd2;
	//pb1=pd1;
	

}
