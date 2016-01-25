/*Write a program that uses the FLOOR( ) macro shown at
the beginning of the chapter. Show the conditions under
which it does not work properly.*/

#define FLOOR(x,b) x>=b?0:1

int main()
{
int a=5;
FLOOR(a&0x0f,0x07);
}
