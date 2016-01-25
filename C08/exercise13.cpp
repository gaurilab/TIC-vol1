/*
Create a function that takes an argument by value as a
const; then try to change that argument in the function
body
*/
#include <iostream>

using namespace std;

void functionX(const int x) //really a tool for the creator of the function, and not the caller.
{
	x=10;// error: assignment of read-only parameter #x#
}
int main()
{
	int x=5;
	cout<<x<<endl;
	functionX(x);
	cout<<x<<endl;

}

