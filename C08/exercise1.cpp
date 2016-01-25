/*Create three const int values, then add them together to
produce a value that determines the size of an array in an
array definition. Try to compile the same code in C and
see what happens (you can generally force your C++
compiler to run as a C compiler by using a command-line
flag)*/
#include <stdio.h>

const int A=8;
const int B=8;
const int C=8;

int main()
{
	int arr[A+B+C]={0};
}
