#ifndef EX31_HPP
#define  EX31_HPP
#include <iostream>
#include <fstream>

using namespace std;

class Mirror{
	bool flag;
	Mirror *selfPtr;
	public:
	Mirror():flag(true),selfPtr(0){cout<<"Calling Mirror::Mirror()"<<std::endl;}

	Mirror(Mirror* ptr):flag(false),selfPtr(ptr)
	{
		cout<<"Calling Mirror::Mirror(Mirror* ptr)"<<std::endl;	
	}
	bool test() const throw()
	{
		if(selfPtr != 0)
		{	
			cout<<"Calling Mirror::test selfPtr != 0 "<<std::hex<<selfPtr<<std::endl;	
		return selfPtr->test();
		}
		else
		{
		return flag;
		}
	}

};
 extern Mirror GM;
 extern Mirror GM1;
 extern Mirror GM2;
 extern Mirror GM3;
 extern Mirror GM4;
 extern Mirror GM5;

class init{
	private:
		static int init_count;
	public:
		init()
		{
			if(init_count++ == 0)
			{
				cout<<"Calling init::init() "<<std::endl;	
				GM2=(&GM);
				GM3=(&GM2);
				GM4=(&GM3);
				GM5=(&GM4);

			}
		}
		~init()
		{
			if(--init_count == 0)
                        {
			cout<<"Calling init::~init() "<<std::endl;	
                        }
		}

};
static init Initializer;
#endif
