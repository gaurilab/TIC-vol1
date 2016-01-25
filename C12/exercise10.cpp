/*
Determine the dummy constant value that your compiler
passes for postfix operator++ and operator--.
*/

#include <iostream>
using namespace std;

class simple
{

	int i;
	public:
	simple(int ii=0):i(ii)
	{
	//	printf("\n constructor called \n");
	//	i=ii;
	}
	~simple()
	{
	//	printf("\n destructor called value of i=%d \n",i);
	}

	simple operator++(int x )
	{
		simple s( this->i);
		 this->i++;
		cout<<x<<endl;	
		 return s;
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

	simple s1(9),s2(5),s3;
	s3=s1++;
//	cout<<s3<<endl;
}
