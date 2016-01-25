/*Create an enum called Hue containing red, blue, and
  yellow. Now create a class called Color containing a data
  member of type Hue and a constructor that sets the Hue
  from its argument. Add access functions to get and
  set the Hue. Make all of the functions inlines.*/
#include <iostream>
using namespace std;
enum Hue{
	red,blue,yellow
};
class Color{
	Hue h;
	public:
	Color(Hue hh=red):h(hh){
	}

	Hue getColor();
	void setColor(Hue hh);
};

inline Hue Color::getColor(){
	return h;
}
inline void Color::setColor(Hue hh){
	h=hh;
}

int main()
{
Color c1(yellow);
cout<<c1.getColor()<<endl;
c1.setColor(blue);
cout<<c1.getColor()<<endl;
 

}
