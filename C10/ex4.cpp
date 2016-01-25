/*

Create a class called Monitor that keeps track of the
number of times that its incident( ) member function has
been called. Add a print( ) member function that displays
the number of incidents. Now create a global function
(not a member function) containing a static Monitor
object. Each time you call the function it should call
incident( ), then print( ) to display the incident count.
Exercise the function in main( ).
*/
#include <iostream>

using namespace std;
class Monitor{
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
};
int Monitor::counter=0;
void functionX()
{
	static Monitor m;
	m.incident();
	m.print();
}


int main()
{
static int i;
while(i++<10)
functionX();
}
