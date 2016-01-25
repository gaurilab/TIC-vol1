#include <iostream>
using namespace std;
class Simple
{
public:
Simple(int sz=0)
{
simple_instance=sz;
cout<<"Simple Constructor called "<<simple_instance<<endl;
}
~Simple()
{
cout<<"Simple Destructor called "<<simple_instance<<endl;
}
int simple_instance;

};

int main()
{
Simple s(10);
Simple s1;
switch(s1.simple_instance)
{
	case 0:
		{
		goto Label;
			break;
		}
	case 10:
		{
			break;
		}
}
Label:
	cout<<"After Label "<<endl;
	
return 0;
}
