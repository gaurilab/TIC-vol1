/*
Write a const pointer to a const object. Show that you can
only read the value that the pointer points to, but you
cant change the pointer or what it points to.
*/
#include <iostream>

const double double_list[]={1,3,4,5,6,7,8,9,2};

int main()
{
const double *const dcp=double_list;


	printf("\n %f \n",*dcp);	
//	for(; dcp<double_list+9;dcp++)
///	{
//	printf("\n %f \n",*dcp);	
//	}
}
