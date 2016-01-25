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
Simple s;
Simple s1(10);
return 0;
}
