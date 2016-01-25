#include<iostream>

int increment(int i,float f, char c,  double d)
{ 
 double din=1110.3434;
 char c_in ='0';
 float fin=4.232;
printf("\n char %c int %d ,float %f , double %f",c,i,f,d); 
 
 return ++i;
}
int main()
{
 double din=1110.3434;
 char c_in ='0';
 float fin=4.232;
int i=0;
i=increment(i,fin,c_in,din);
}
