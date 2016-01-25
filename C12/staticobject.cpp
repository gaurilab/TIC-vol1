#include<iostream>

using namespace std;

class C{
};

int main()
{
 C c1[12] , C2;
 cout<<"sizeof class C "<<sizeof(C)<<endl;
for(size_t i=0;i<12;i++)
cout <<hex<<&c1[i]<<" "<<&C2<<endl; 
}
