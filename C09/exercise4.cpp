/*Create two identical functions, f1( ) and f2( ). Inline f1( )
and leave f2( ) as an non-inline function. Use the
Standard C Library function clock( ) that is found in
<ctime> to mark the starting point and ending points
and compare the two functions to see which one is faster.
You may need to make repeated calls to the functions
inside your timing loop in order to get useful numbers.*/
#include <ctime>
#include <iostream>
using namespace std;

inline void f1()
{
 static int i=0;
 i++;
// printf("\n%s\n",__func__);
}
void f2()
{
static int i=0;
 i++;
/// printf("\n%s\n",__func__);

}

int main(int argc ,char* argv[])
{
	if( argc <2 )
	{
	 cout<<"Enter number of iterations"<<endl;
	 exit(1);
	}
	unsigned long long ii= atoi(argv[1]);
	cout<< sizeof(unsigned long long)<<endl;

	cout<<clock()<<endl;
	for (unsigned long long  i=0;i<ii;i++)
	f1();

	cout<<clock()<<endl;
	for ( unsigned long long   i=0;i<ii;i++)
	f2();
	cout<<clock()<<endl;
}
