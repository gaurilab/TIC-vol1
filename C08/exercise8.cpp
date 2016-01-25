/*Write two pointers to const long using both forms of the
declaration. Point one of them to an array of long.
Demonstrate that you can increment or decrement the
pointer, but you cant change what it points to.*/
#include <iostream>
//const long g_l=123.45;
long long_list[]={1,3,4,5,6,7,8,9,2};
//const long *clp1;
//long const *clp2;

int main()
{
const long *clp1;
long const *clp2;
	clp2 =&long_list[3];	
	//*clp2=23;
	for(clp1=long_list; clp1<long_list+9;clp1++)
	{
	printf("\n %ld \n",*clp1);	
	}
	//*clp2=23;
}

