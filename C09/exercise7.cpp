
/*Create a class that contains an array of char. Add an
inline constructor that uses the Standard C library
function memset( ) to initialize the array to the
constructor argument (default this to  ), and an inline
member function called print( ) to print out all the
characters in the array.*/
#include <cstring>
#include <iostream>
using std::cout;
using std::endl;
class X{
enum {SZ=5};
char arr[SZ];
public:
X();
void print();
};

inline X::X()
{
 memset(arr,0,SZ*sizeof(char));
 std::cout<<"X::X() called"<<endl;
}
inline void X::print()
{
 for (int i=0;i<SZ;i++)
	cout<<arr[i]<<"*"<<endl;
}
int main ()
{
X a;
a.print();
 return 0;
}
