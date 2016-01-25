/*

Create a function that returns the next value in a
Fibonacci sequence every time you call it. Add an
argument that is a bool with a default value of false such
that when you give the argument with true it resets the
function to the beginning of the Fibonacci sequence.
Exercise this function in main( ).
*/
#include <iostream>
using namespace std;
unsigned long long nextFibbo(bool reset=false)
{
	static unsigned long long firstFibo=0;
	static unsigned long long secFibo=0;
	if( reset==true)
	{
		firstFibo=0;
         	secFibo=0;
	}
	unsigned long long  value_to_return=0;
	if(	firstFibo ==0 && secFibo ==0)
	{
	value_to_return=1;
	}
	else
	{
	value_to_return= firstFibo+secFibo;
		
	}
	firstFibo=secFibo;	
	secFibo=value_to_return;
	return value_to_return;
}

int main(int argc, char *argv[])
{
	if(argc <2)
	{
	cout<<"Enter the number ofentries to print"<<endl;
	}
	int i=0;
	while( i++<atoi(argv[1]))
	{
		cout<<"\t"<<nextFibbo();
		
	}
	cout<<endl;
}
