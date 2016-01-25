/*
Create a class called SpaceShip with a fly( ) method.
Inherit Shuttle from SpaceShip and add a land( )
method. Create a new Shuttle, upcast by pointer or
reference to a SpaceShip, and try to call the land( )
method. Explain the results.
*/


class SpaceShip {
public:
void fly() const throw(){}
//void  land()throw() {} --without using this function can you make it runm
};

class Shuttle:public SpaceShip{
void  land()const throw() {}
};

int main()
{

	Shuttle *pshuttle =new Shuttle();
	Shuttle lpshuttle;
	Shuttle &rpshuttle =lpshuttle;

	SpaceShip *pspaceship= pshuttle;
	//pspaceship->land();

	
	
}
