/*Write a Number class that holds a double, and add
overloaded operators for +, , *, /, and assignment.
Choose the return values for these functions so that
expressions can be chained together, and for efficiency.
Write an automatic type conversion operator int( )*/
#include <iostream>
using namespace std;
class Number{
private:
double d;
static int cc_cout;
static int c_cout;
static int d_cout;
public:
Number(double s=0):d(s){
cout<<"C called"<<++c_cout<<" times"<<endl;}
Number(const Number&){ //copy constructor
cout<<"CC called"<<++cc_cout<<" times"<<endl;
}
~Number()
{
cout<<"D called"<<++d_cout<<" times"<<endl;
}
Number& operator=(const Number& n1);
const Number operator+(const Number& n1)const;
const Number operator-(const Number& n1)const;
const Number operator*(const Number& n1)const;
const Number operator/(const Number& m1)const;

friend ostream& operator<<(ostream& out, const Number& m1)
{
	out<<m1.d<<endl;
	return out;
}
 operator int()const { // defined in source 
 return int(d);
}
};
const Number Number::operator+(const Number& n1)const{
 return((Number)(this->d+n1.d));
}
const Number Number::operator-(const Number& n1)const
{
 return((Number)(this->d-n1.d));
}
const Number Number::operator*(const Number& n1)const
{
 return((Number)(this->d*n1.d));
}
const Number Number::operator/(const Number& m1)const
{
 return((Number)(this->d/m1.d));
}
Number& Number::operator=(const Number& m1)
{
 this->d=m1.d;
 return *this;
}
int Number::cc_cout=0;
int Number::c_cout=0;
int Number::d_cout=0;
int main()
{
Number n1(1);
Number n2(2);
Number n3(3);
Number n4(4);
Number n5(5);
//n1=n2+n3;
//cout<<n1;
//cout<<n2+n3+n4+n5;
cout<<(n1=n2+n3+n4+n5);
int i1=n5;
cout<<i1<<endl;
}
