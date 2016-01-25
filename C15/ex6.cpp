/*
Create an inheritance hierarchy of Rodent: Mouse,
Gerbil, Hamster, etc. In the base class, provide methods
that are common to all Rodents, and redefine these in the
derived classes to perform different behaviors depending
on the specific type of Rodent. Create an array of
pointers to Rodent, fill it with different specific types of
Rodents, and call your base-class methods to see what
happens.
*/
#include <iostream>
using namespace std;
class Rodent{
	public:
	virtual void eat(){cout<<"Rodent Eating\n ";}
	virtual void sleep(){cout<<"Rodent sleeping\n ";}
	virtual ~Rodent(){}
};

class Mouse:public Rodent{ void eat(){cout<<"Mouse Eating\n ";} void sleep(){cout<<"Mouse sleeping\n ";}};

class Gerbil:public Rodent{ void eat(){cout<<"Gerbil Eating\n ";} void sleep(){cout<<"Gerbil sleeping\n ";}};

class Hamster:public Rodent{ void eat(){cout<<"Hamster Eating\n ";} void sleep(){cout<<"Hamster sleeping\n ";}};


int main()
{
const size_t SZ=3;
Rodent *rp[SZ];
rp[0]=new Mouse();
rp[1]=new Gerbil();
rp[2]=new Hamster();

for(size_t i=0;i<SZ;i++)
{
rp[i]->eat();
rp[i]->sleep();

}
for(size_t i=0;i<SZ;i++)
delete(rp[i]);

}
