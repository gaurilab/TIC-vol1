/*
Create a function with a static variable that is a pointer
(with a default argument of zero). When the caller
provides a value for this argument it is used to point at
the beginning of an array of int. If you call the function
with a zero argument (using the default argument), the
function returns the next value in the array, until it sees a
-1 value in the array (to act as an end-of-array
indicator). Exercise this function in main( ).
*/
#include <iostream>
using namespace std;
const int NO_ELEMENT_EXIST =-77;
int functionx(int* ptrtoarray=0)//Argumentis the begning of array
{
	static int* valuetoreturn=ptrtoarray;
	if(valuetoreturn)
	{
		cout<<"*valuetoreturn="<<*(valuetoreturn+1)<<endl;	
		if(*valuetoreturn == -1 )
		{
		return NO_ELEMENT_EXIST;	
		}
		return *(++valuetoreturn);
	}
	else 
		return NO_ELEMENT_EXIST;

}

int main()
{
	int arr[]={13,21,34,-1};
	
	functionx(arr);
	while(NO_ELEMENT_EXIST!=functionx());
}
