
/*Create a class containing both a const and a non-const
float. Initialize these using the constructor initializer list*/

#include <iostream>
using namespace std;
class X{
const float cf;
float f;
public:
 X():cf(0.5645),f(1){
	cout<<cf<<" "<<f<<endl;
	}

};

int main()
{
	X x;
	
}
