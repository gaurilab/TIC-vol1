#include <iostream>
using namespace std;

int main()
{
 int a[2][2]={1};
 int (*p)[2]=a;
// int *p5=a;
int   (*p1)[2]=a;
//int   (*px)[2]=a[0];
int   *pv=a[0];
	cout <<hex<<pv<<endl;
	cout <<hex<<++pv<<++pv<<++pv<<endl;

	cout<<hex<<p<<endl;
	cout<<hex<<++p<<endl;
}
