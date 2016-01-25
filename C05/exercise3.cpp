#include <iostream>
using namespace std;

//class X;

//int  getX( X *a_x);
//X setX(int i, X *a_x);
class Y;
class X{
	private:
		int x;
		friend X setX(int i, X *a_x);
		friend int  getX( X *a_x);
	public:
		X()
		{
			cout<<"Constructor called"<<endl;
		}
		X(const X&)
		{
			cout<<"Copy Constructor called"<<endl;

		}

};

X setX(int i, X *a_x)
{
	a_x->x=i;
	cout<<"Before returning the Class X"<<endl;
	return *a_x;
}
int  getX( X *a_x)
{
	cout<<"Before returning the integer"<<endl;
	return (a_x->x);
}
int main()
{
	X l_x;
	X l_y;
	l_y=setX(10,&l_x);
	cout<<"getX returned "<<getX(&l_x)<<endl;
	cout<<"getX returned "<<getX(&l_y)<<endl;
	return 0;
}
