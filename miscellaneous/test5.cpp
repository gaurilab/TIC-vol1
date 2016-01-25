#include <iostream>

using namespace std;

int main()
{
	int x=5;
	cout<<hex<<&x<<endl;
	int &y=x;
	cout<<hex<<&y<<endl;
	int *xy = &x; 
	cout<<hex<<xy<<endl;
	int * RefPtr=&y;
	int *& RefPtr1=xy;
	//int & & RefPtr2=y;


	return 0;
}
