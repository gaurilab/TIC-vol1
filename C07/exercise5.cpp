
#include <iostream>

class test{

public:
#if 0
void mfunc(int a){
printf("\n Printing details :a =%d\n",a);
}
void mfunc(int a , int b)
{
printf("\n Printing details :a =%d b=%d\n",a,b);
}

void mfunc(int a , int b, int c)
{
printf("\n Printing details :a =%d b=%d c=%d \n",a,b,c);
}
#endif
void mfunc(int a , int b=0, int c =0, int d=0,int)
{
printf("\n Printing details :a =%d b=%d c=%d d=%d\n",a,b,c,d);
}

};
int main()
{
	test y;
	y.mfunc(1);
	y.mfunc(1,2);
	y.mfunc(1,2,3);
	y.mfunc(1,2,3,4);
}
