/*
Starting with the previous Rodent hierarchy, inherit
BlueHamster from Hamster (yes, there is such a thing; I
had one when I was a kid), override the base-class
methods, and show that the code that calls the base-class
methods doesnt need to change in order to
accommodate the new type.
*/
#include <iostream>
#include <vector>
using namespace std;
class Rodent{
	public:
	virtual void eat(){cout<<"Rodent Eating\n ";}
	virtual void sleep(){cout<<"Rodent sleeping\n ";}
	virtual ~Rodent(){cout<<"~Rodent\n ";}
};

	class Mouse:public Rodent{ 
		void eat()
		{
			cout<<"Mouse Eating\n ";
		} 
		void sleep()
		{
			cout<<"Mouse sleeping\n ";
		}
		~Mouse(){cout<<"~Mouse\n";}
	};

class Gerbil:public Rodent{
 void eat(){cout<<"Gerbil Eating\n ";} 
void sleep(){cout<<"Gerbil sleeping\n ";}
~Gerbil(){cout<<"~Gerbil\n";}
};

class Hamster:public Rodent{ 
public:
void eat(){cout<<"Hamster Eating\n ";}
 void sleep(){cout<<"Hamster sleeping\n ";}
~Hamster(){cout<<"~Hamster \n";}
};

 class BlueHamster:public Hamster{
	public:
		void eat()
		{
			cout<<"BlueHamster Eating\n ";
		} 
		void sleep()
		{
			cout<<"BlueHamster sleeping\n ";
		}
		~BlueHamster(){cout<<"~BlueHamster\n";}


};
int main()
{
std::vector<Rodent*> rp; 
std::vector<Rodent*>::iterator rt_it;

rp.push_back(new Mouse());
rp.push_back(new Gerbil());
rp.push_back(new Hamster());
for(rt_it=rp.begin();rt_it != rp.end();rt_it++)
{
(*rt_it)->eat();
(*rt_it)->sleep();

}

for(rt_it=rp.begin();rt_it != rp.end();rt_it++)
delete(*rt_it);

}
