/*
Expanding on Exercise 2, create a function that takes a
Shape object by value and try to upcast a derived object in
as an argument. See what happens. Fix the function by
taking a reference to the Shape object.
*/
#include <iostream>
class Shape{
public:
Shape(){
//std::cout<<"Shape()"<<std::endl;

 //draw();
}
virtual void draw()=0;
virtual ~Shape()
{
}
};

void Shape::draw(){
std::cout<<"Drawing Shape"<<std::endl;
}
class Circle:public Shape{

public:
void draw(){
std::cout<<"Drawing Circle"<<std::endl;
}
virtual ~Circle(){}
};

class Square:public Shape{

public:
void draw(){
std::cout<<"Drawing Square"<<std::endl;
}
virtual ~Square(){}
};
class Triangle:public Shape{
public:
void draw(){
std::cout<<"Drawing Triangle"<<std::endl;
}
virtual ~Triangle(){}
};
void functionC(Shape& ss) //cannot declare parameter ‘ss’ to be of abstract type ‘Shape’
{
ss.draw();
}
int main()
{
//Shape sh;
#if 0
const size_t SZ=3;
Shape *pSh[SZ];
pSh[0]=new Triangle; 
pSh[1]=new Circle; 
pSh[2]=new Square;
for (size_t i=0;i<SZ;i++)
{
pSh[i]->draw();
}
#endif
Triangle t;
Circle c;
Square s;
functionC(t);
functionC(s);
functionC(c);
}
