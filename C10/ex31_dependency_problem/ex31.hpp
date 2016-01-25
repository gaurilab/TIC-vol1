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


#endif
