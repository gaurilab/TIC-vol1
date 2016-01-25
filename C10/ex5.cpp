/*
Modify the Monitor class from Exercise 4 so that you can
decrement( ) the incident count. Make a class Monitor2
that takes as a constructor argument a pointer to a
Monitor1, and which stores that pointer and calls
incident( ) and print( ). In the destructor for Monitor2,
call decrement( ) and print( ). Now make a static object
of Monitor2 inside a function. Inside main( ), experiment
with calling the function and not calling the function to
see what happens with the destructor of Monitor2.

*/
#include <iostream>

using namespace std;
class Monitor1{
	private:
		static int counter;
	public:
		static void print(){
			cout<<"Number of times the incident is called is "<<counter<<endl;
		}
		static void incident()
		{	
			counter++;	
		}
		static void decrement()
		{
			counter--;
		}

};
int Monitor1::counter=0;

class Monitor2{
	Monitor1* mptrMonitor1;
	public:
	Monitor2(Monitor1* m =0):mptrMonitor1(m)
	{
		if(mptrMonitor1)
		{
			mptrMonitor1->incident();
			mptrMonitor1->print();
		}
		
	}
	~Monitor2()
	{
		if(mptrMonitor1)
                {
		mptrMonitor1->decrement();
		mptrMonitor1->print();
		}
	}

};
void functionX()
{
	
	static Monitor2 m(new Monitor1());
}


//Monitor2 mg(new Monitor1()); //ex6
int main()
{
functionX();
}
