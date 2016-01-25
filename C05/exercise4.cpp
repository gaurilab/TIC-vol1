#include <iostream>
using namespace std;

class Y;
class X{
	private:
		int x;
		friend int  sum( X *a_x, Y *a_y);
	public:
		X(int i=10)
		{
			cout<<"Constructor called X "<<endl;
			x=i;
		}
		X(const X&)
		{
			cout<<"Copy Constructor called X "<<endl;

		}

};
class Y{
	private:
		int y;
		friend int  sum( X *a_x, Y *a_y);
	public:
		Y(int i=29)
		{
			cout<<"Constructor called  Y "<<endl;
			y=i;
		}
		Y(const Y&)
		{
			cout<<"Copy Constructor called Y "<<endl;

		}

};
int sum( X *a_x, Y *a_y)
{
 return(a_x->x+a_y->y);
}
int main()
{
	X l_x;
	Y l_y(50);
	cout<<"sum of l_x and l_yis "<<sum(&l_x,&l_y)<<endl;
	return 0;
}
