#include<stdio.h>

void func(int** ppInt)
{
	printf("\n 0x%x\n",ppInt);
	printf("\n 0x%x\n",*ppInt);
	printf("\n %d\n",*(*ppInt));
}

int main()
{
int i = 47;
int* ip = &i;
func(&ip);
}
