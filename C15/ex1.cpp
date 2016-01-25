/*
Create a simple shape hierarchy: a base class called
Shape and derived classes called Circle, Square, and
Triangle. In the base class, make a virtual function called
draw( ), and override this in the derived classes. Make an
array of pointers to Shape objects that you create on the
heap (and thus perform upcasting of the pointers), and
call draw( ) through the base-class pointers, to verify the
behavior of the virtual function. If your debugger
supports it, single-step through the code.
*/
#include <iostream>
class Shape{

public:
virtual void draw(){
//void draw(){
std::cout<<"Drawing Shape"<<std::endl;
}
virtual ~Shape()
{
}
};

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
const size_t SZ=3;
Shape *pSh[SZ];
pSh[0]=new Triangle; 
pSh[1]=new Circle; 
pSh[2]=new Square;
for (size_t i=0;i<SZ;i++)
{
pSh[i]->draw();
}
}
