#include<iostream>


void funcPP(int** & rppi)
{

}


void funcPPconst(int** const & rppi)
{

}

int main()
{
int i=1;
int *pi=&i;
int **ppi=&pi;

funcPP(ppi);
funcPPconst(&pi);

}
