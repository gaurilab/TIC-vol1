/*
   Create a class Rock with a default constructor, a copyconstructor,
   an assignment operator, and a destructor, all
   of which announce to cout that theyve been called. In
   main( ), create a vector<Rock> (that is, hold Rock objects
   by value) and add some Rocks. Run the program and
   explain the output you get. Note whether the destructors
   are called for the Rock objects in the vector. Now repeat
   the exercise with a vector<Rock*>. Is it possible to create
   a vector<Rock&>?
 */

#include <vector>
#include <iostream>

using namespace std;

class Rock
{
	public:
		Rock()
		{
			cout<<"calling Rock::"<<__func__<<endl;
		}
		Rock(const Rock& rk)
		{
			cout<<"calling Rock::const Rock &rk"<<__func__<<endl;
		}
		~Rock()
		{
			cout<<"calling Rock::"<<__func__<<endl;
		}
		Rock& operator=(const Rock& rr)
		{
			cout<<"calling Rock::"<<__func__<<endl;
			return *this;
		}
};


int main()
{

#if 1
	vector<Rock> RockVector;
	for(int i=0;i<2;i++)
	{
		cout<<"Will be generating  temporary Rock Object"<<endl;
		RockVector.push_back(Rock());
		cout<<"Will be terminating  temporary Rock Object"<<endl;
	}

		cout<<"==================================="<<endl;
#endif

	//vector<Rock*> pRockVector;
#if 0
	for(int i=0;i<2;i++)
	{
		cout<<"Will be generating  Rock Object on heap "<<endl;
		pRockVector.push_back(new Rock());
		cout<<"Will be terminating  Rock Object on heap"<<endl;
	}
#endif


}
