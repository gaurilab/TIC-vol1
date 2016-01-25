#include <iostream>
using namespace std;
class Simple
{
public:
Simple()
{
cout<<"Simple Constructor called "<<endl;
}
~Simple()
{
cout<<"Simple Destructor called "<<endl;
}


};

int main()
{
Simple s;
return 0;
}
