/*Modify the increment and decrement operators in
Exercise 4 so that the prefix versions return a non-const
reference and the postfix versions return a const object.
Show that they work correctly and explain why this
would be done in practice.*/

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

	simple operator+(const simple& s2 )
	{
		simple s;
		s.i=this->i+s2.i;	
		printf("\n Value of sum =%d \n",s.i);
		return s;
	}
	const simple operator++(int=0)
	{
		simple s(i);
		i++;
		return s;
	}

	const simple&  operator++()
	{
		i++;
		return *this;
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
	cout<<++s3;

	cout<<s3++;
	cout<<s3;

}
