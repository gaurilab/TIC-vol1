/*Create a class with a volatile data member. Create both
volatile and non-volatile member functions that modify
the volatile data member, and see what the compiler
says. Create both volatile and non-volatile objects of
your class and try calling both the volatile and nonvolatile
member functions to see what is successful and
what kind of error messages the compiler produce*/


class X{
	//volatile char flag;
	char flag;
	public:

	void mfunc3() {
		flag++;
	}
	void mfunc2() volatile{
		mfunc1();

		flag++;
	}
	void mfunc1() volatile{
		flag++;
	}

};

int main()
{
	volatile X x;
	x.mfunc1();
	x.mfunc2();
	//x.mfunc3();
	X c;
	
	c.mfunc1();
	c.mfunc2();
	c.mfunc3();
}
