#include <iostream>

void glofunc(char &a_mem){
a_mem='n';
}


int main()
{
char l_mem='y';
printf("\n value of l_mem =[%c]\n",l_mem);
glofunc(l_mem);
printf("\n value of l_mem =[%c]\n",l_mem);
}
