/*

Create a class with a destructor that prints a message and
then calls exit( ). Create a global object of this class and
see what happens.
*/
#include <iostream>
#include <stdlib.h>
using namespace std;
class X{

public:
X(){cout<<"Calling X"<<endl;}
//~X(){cout<<"Calling ~X"<<endl; exit(-1);}
~X(){cout<<"Calling ~X"<<endl; abort();}

};
 X x;
int main()
{
return 0;
}
