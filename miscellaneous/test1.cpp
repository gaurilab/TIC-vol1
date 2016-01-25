#include <iostream>

int main()
{
const int a[2][2]={1};
const int (*p)[2]=a;
int const  (*p1)[2]=a;
int const  (*px)[2]=a[0];

//int (*const p5)[2]=a;
//int (*const p6)[2]=a;

const int (*const p3)[2]=a;
int const  (*const p4)[2]=a;

int const  *p2=a[1];
int const  **p8=&p2;

}
