#include <iostream>

class testconstmemfunction{
	public:
		void func1()const{
		}
		void noconstfunc1()
		{
		}
#if 0
		void memfunc1(testconstmemfunction a_mem)const{
		}
		void memfunc2(testconstmemfunction& a_mem)const{
		}
		void memfunc3(const testconstmemfunction& a_mem)const{
		}
		void memfuncnoconst1(testconstmemfunction a_mem){
		}
		void memfuncnoconst2(testconstmemfunction& a_mem){
		}
		void memfuncnoconst3(const testconstmemfunction& a_mem){
		}
#endif

};

void glofunc1(testconstmemfunction a_mem) const
//void glofunc1(testconstmemfunction a_mem)// cannot have cv-qualifier
{
a_mem.func1();
a_mem.noconstfunc1();
}
//void glofunc2(testconstmemfunction& a_mem)const
void glofunc2(testconstmemfunction& a_mem)
{
a_mem.func1();
a_mem.noconstfunc1();
}
//void glofunc3(const testconstmemfunction& a_mem)const
void glofunc3(const testconstmemfunction& a_mem)
{
a_mem.func1();
a_mem.noconstfunc1();
}
void glofuncnoconst1(testconstmemfunction a_mem){

a_mem.func1();
a_mem.noconstfunc1();
}
void glofuncnoconst2(testconstmemfunction& a_mem){

a_mem.func1();
a_mem.noconstfunc1();
}
void glofuncnoconst3(const testconstmemfunction& a_mem){
//void glofuncnoconst3(testconstmemfunction& a_mem){
a_mem.func1();
a_mem.noconstfunc1();
}


int main()
{
	testconstmemfunction l_test;
	glofunc1(l_test);
	glofunc2(l_test);
	glofunc3(l_test);
	glofuncnoconst1(l_test);
	glofuncnoconst2(l_test);
	glofuncnoconst3(l_test);

}
