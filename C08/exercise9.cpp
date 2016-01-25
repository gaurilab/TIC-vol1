/*Write a const pointer to a double, and point it at an array
of double. Show that you can change what the pointerpoints to, but you cant increment or decrement the pointer.*/

#include <iostream>

double double_list[]={1,3,4,5,6,7,8,9,2};

int main()
{
double *const dcp=double_list;


	for(; dcp<double_list+9;dcp++)
	{
	printf("\n %f \n",*dcp);	
	}
}

