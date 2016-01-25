/*
   Create a simple class with an overloaded operator++. Try
   calling this operator in both pre- and postfix form and
   see what kind of compiler warning you get.
*/

/*
1.compiler do not give warning , it gives error "error: no ‘operator++(int)’ declared for postfix ‘++’, trying prefix operator instead"

*/

#include <iostream>
using namespace std;

class simple
{

	int i;
	public:
	simple(int ii=0):i(ii)
	{
		printf("\n constructor called \n");
	//	i=ii;
	}
	~simple()
	{
		printf("\n destructor called value of i=%d \n",i);
	}
#if 1
	simple operator++(int=0)
	//simple& operator++(int=0) //cannot //error: invalid initialization of non-const reference of type ‘simple&’ from a temporary of type ‘simple’
//	const simple & operator++(int =0) // warning: returning reference to temporary
	{
		i++;
		return simple(i);
	}
#endif 
	//simple operator++()
	simple operator++()
	{
		i++;
		return simple(i);
	}


	friend ostream&  operator<<(ostream& os, const simple & s);

};

ostream&  operator<<(ostream& os, const simple & s)
{
	os<<s.i<<endl;
	return os;
}

int main()
{

	simple s;
	cout<<++s;

	cout<<s++;
}
