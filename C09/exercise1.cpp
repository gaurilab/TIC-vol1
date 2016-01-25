/*Write a program that uses the F( ) macro shown at the
beginning of the chapter and demonstrates that it does
not expand properly, as described in the text. Repair the
macro and show that it works correctly.*/
//#include <iostream>

#define F(x) (x + 1)

int main()
{
int a=9;
 F(a);
return 0;
}

