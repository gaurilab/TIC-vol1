#include <iostream>

int& func(int *pInt)
{
	(*pInt)++;
	return (*pInt);
}

int main()
{
int i=10;
//int j=10;
//int &l_ref_to_int=0; //Cannot initialize the reference to a temporary variable or the NULL
int &l_ref_to_int =i;//error references has to be initialized
//l_ref_to_int =j;//error references cannot be changed during runtime
int  &l_ref_return=func(&i);

printf("\n The value returned =%d\n",l_ref_return);


}
