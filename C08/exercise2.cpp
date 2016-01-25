/*Prove to yourself that the C and C++ compilers really do
treat constants differently. Create a global const and use
it in a global constant expression; then compile it under
both C and C++.*/

/*

===============================+============================
	Compiler C	       | Compiler C++
===============================+============================
1.Allocates memory space for   | 1.Depend on the usage context
 the constant irrespective of  | whether the storage is allocated 
any exceptions#                | or not
===============================+============================
2.Defaults to External linkage | 2.Defaults to Internal linkage
                               | have to specify the extern explicitly
===============================+============================

*/
#include <iostream>

const int g_VAR = 10;
const int arr[g_VAR]={0};
int main()
{
	int i=0;
	for(i=0;i<g_VAR;i++)
	std::cout<<arr[i]<<std::endl;
}

