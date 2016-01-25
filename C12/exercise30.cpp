/*
Create two classes and create an operator+ and the
conversion functions such that addition is reflexive for
the two classes.
*/ 
#include <iostream>
using namespace std;
class King;
class Queen{
	int q;
	public:
	Queen(int i=0):q(i){}
	friend const Queen operator+(const Queen & , const King &);
	friend ostream & operator<<(ostream &out , const Queen& Q)
	{
		out<<"Queen details"<<Q.q<<endl;
		return out;
	}
	operator King();//{ return King(q);}
};

class King{
	int k;
	friend const Queen operator+(const Queen & , const King &);
	public:
	King(int i=0):k(i){}
	operator Queen(){ std::cout<<"operator Queen() called"<<endl;return Queen(k);}
};

Queen::operator King()
{
std::cout<<"Queen::operator King called"<<endl;
 return King(q);
}
const Queen operator+(const Queen &Q , const King &K)
{
std::cout<<"Queen operator+(const Queen & , const King &) called"<<endl;
return Queen(Q.q+K.k); 
}
int main()
{
	King K(8);
	Queen Q(8);
	Queen Q1=Q+K;
	Queen Q2=K+Q;
	Queen Q3=K+9;
	cout<<Q1;
	cout<<Q2;
}
