
/*
   Create a class called Asteroid. Use inheritance to
   specialize the PStash class in Chapter 13 (PStash.h &
   PStash.cpp) so that it accepts and returns Asteroid
   pointers. Also modify PStashTest.cpp to test your
   classes. Change the class so PStash is a member object.
 */
#ifndef ASTEROID_HPP__
#define ASTEROID_HPP__
#include "PStash.h"
#include <iostream>
using namespace std;
class Asteroid:public PStash{
	int id;
	public:
	Asteroid(int i=0):id(i){}
	int add(Asteroid * element) {
		return (PStash::add(element));
	}


	Asteroid* operator[](int index) const {
			return((Asteroid*) PStash::operator[] (index));
		
	}

	Asteroid* remove(int index) {
		return (Asteroid*)PStash::remove(index);
	}
	friend ostream & operator<<(ostream & out,const Asteroid & a)
	{
		out<<"Asteroid details"<<a.id<<std::endl;
		return out;
	}
};
#endif
