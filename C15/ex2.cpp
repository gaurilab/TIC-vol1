/*
Modify Exercise 1 so draw( ) is a pure virtual function.
Try creating an object of type Shape. Try to call the pure
virtual function inside the constructor and see what
happens. Leaving it as a pure virtual, give draw( ) a
definition.
*/
#include <iostream>
class Shape{

public:
Shape(){
std::cout<<"Shape()"<<std::endl;

 draw();
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

int main()
{
//Shape sh;
#if 1
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
}
