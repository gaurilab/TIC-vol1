/*
Modify Exercise 3 so that the operator+ and operator- are
non-member functions. Demonstrate that they still work
correctly.
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

	//const simple operator+(const simple& s2 ) //error: passing ‘const simple’ as ‘this’ argument of ‘simple simple::operator-(const simple&)’ discards qualifiers
	 friend simple operator+(const simple& s1,const simple& s2 );
//	const simple operator+(const simple& s2 )const 

	//simple operator+(const simple& s2 ) //this works fine 
/*	{
		simple s;
		s.i=this->i+s2.i;	
		printf("\n Value of sum =%d \n",s.i);
		return s;
	}*/
	friend simple operator-(const simple& s1,const simple& s2 );
	//const simple operator-(const simple& s2 )  const 
	//simple operator-(const simple& s2 ) 
/*	{
		simple s;
		s.i=this->i-s2.i;	
		printf("\n Value of differnece =%d \n",s.i);
		return s;
	}
*/

	friend ostream&  operator<<(ostream& os, const simple & s);

};

simple operator+(const simple& s1,const simple& s2 )
{
	simple s;
	s.i=s1.i+s2.i;       
	printf("\n Value of sum =%d \n",s.i);
	return s;

}
simple operator-(const simple& s1,const simple& s2 )
{
	simple s;
	s.i=s1.i-s2.i;       
	printf("\n Value of defference =%d \n",s.i);
	return s;

}
ostream&  operator<<(ostream& os, const simple & s)
{
	os<<s.i<<endl;
	return os;
}

int main()
{

	simple s1(9),s2(5),s3,s4(4);
	s3=s1+s2-s4;
	//cout<<s1+s2-s4;
	cout<<s3;
}
