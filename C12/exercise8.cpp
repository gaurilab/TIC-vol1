/*
Add the unary operator- to Exercise 2 and demonstrate
that it works correctly.
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
	simple operator-( )
	{
		simple s;
		s.i= - this->i;
		printf("\n Value of returned value=%d \n",s.i);
		return s;
	}

	simple operator+(const simple& s2 )
	{
		simple s;
		s.i=this->i+s2.i;	
		printf("\n Value of sum =%d \n",s.i);
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
	s3=s1+s2;
	cout<<s3;
	cout<<(-s3);
}
