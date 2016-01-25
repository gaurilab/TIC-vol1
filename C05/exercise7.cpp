#include<iostream>

using namespace std;
class Hen;
//class Hen::Nest;
//class Hen::Nest::Egg;

class Hen{
	public:
		class Nest;
		Hen::Nest *nests;
		class Egg; //This egg is defined inside the Hen class
		Hen::Egg *egg_inside_Hen;
		class Nest
		{
			public:
				class Egg{
					public:
						Egg() throw()
						{
							cout<<"Constructor of Egg "<<endl;
							num_of_eggs=10;
						}
						void display() throw();
						friend class Nest;
						friend class Hen;
					private:
						int num_of_eggs;	
				};
				void display();
				Nest() throw()
				{
					cout<<"Constructor of Nest"<<endl;
					num_of_nest =10;
				}
				void getDetails(Hen::Nest::Egg* eggs)
				{
					cout<<"Number of eggs "<<eggs->num_of_eggs<<endl;
				}
			private:
			friend class Hen;
				int num_of_nest;
		};

		Hen::Nest::Egg *eggs;

		void display()
		{
			cout<<"display of Hen "<<endl;
		}
		Hen() throw()
		{
			eggs = new Hen::Nest::Egg;
			nests = new Nest;

		}
		friend class Hen::Nest::Egg;
		friend class Hen::Nest;
		void getDetails(Hen::Nest::Egg* eggs)
		{
			cout<<"Number of eggs "<<eggs->num_of_eggs<<endl;
		}
		void getNests(Hen::Nest* nests)
		{
			cout<<"Number of nests "<<nests->num_of_nest<<endl;
		}

};

void Hen::Nest::display()
{
	cout<<"display of Nest"<<endl;
}
void Hen::Nest::Egg::display() throw()
{
	cout<<"display of Egg"<<endl;
}
int main(int argc , char *argv[])
{
	Hen h;
	Hen::Nest::Egg e;
	Hen::Nest n;
	h.display();
	n.display();
	e.display();
	h.getDetails(&e);
	h.getNests(&n);
	n.getDetails(&e);
	//cout<<"Number of nests"<<h.nests.num_of_nest<<endl;
	h.nests->display();
	h.eggs->display();
	//cout<<"Number of eggs"<<h.eggs.num_of_eggs<<endl;


}
