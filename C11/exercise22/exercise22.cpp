#include <iostream>


class nocopyconstructor{
	nocopyconstructor(const nocopyconstructor&); //copy constructor made private so object cannot be passed by value
	public:
	nocopyconstructor constructednocopyconstructor(const nocopyconstructor& d){ // funct
		nocopyconstructor l= new nocopyconstructor();
		l=d;
		return l;
	}
	nocopyconstructor clone(const nocopyconstructor& n) const
	{
		nocopyconstructor l= new nocopyconstructor();
		return l;
	
	}
};


void function(nocopyconstructor arg)
{

}

int main()
{
	nocopyconstructor obj1;
//	function(obj1);
	
	obj1.clone()
}
