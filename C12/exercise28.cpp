/*
Create two classes, Apple and Orange. In Apple, create a
constructor that takes an Orange as an argument. Create
a function that takes an Apple and call that function with
an Orange to show that it works. Now make the Apple
constructor explicit to demonstrate that the automatic
type conversion is thus prevented. Modify the call to
your function so that the conversion is made explicitly
and thus succeeds
*/
class Orange{
};
class Apple{
	public: 
/*explicit*/		Apple(Orange ){ //error: conversion from ‘Orange’ to non-scalar type ‘Apple’ requested
		}
};


void funcX(Apple  ){
}

int main()
{
Orange o;
funcX(o);
}
