/*4.Add an operator++ and operator-- to Exercise 2, both the
prefix and the postfix versions, such that they return the
incremented or decremented object. Make sure that the
postfix versions return the correct value.*/

/*Create a simple class containing an int and overload the
operator+ as a member function. Also provide a print( )
member function that takes an ostream& as an argument
and prints to that ostream&. Test your class to show that
it works correctly.*/


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
	simple operator++(int=0)
	{
		return simple(i++);
	}

	simple operator++()
	{
		i++;
		return simple(i); //return value optimization
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
