#include<iostream>

using namespace std;

class Hen{
	public:
		class Nest
		{
			public:
				class Egg{
					public:
						void display();
					//	{
					//		cout<<"display of Egg"<<endl;
					//	}
				};
				void display();
			//	{
			//		cout<<"display of Nest"<<endl;
			///	}
		};
		void display()
		{
			cout<<"display of Hen "<<endl;
		}

};
void Hen::Nest::display()
//void Egg::display()
{
					cout<<"display of Nest"<<endl;
}
void Hen::Nest::Egg::display()
//void Egg::display()
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

}
