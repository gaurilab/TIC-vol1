//: C13:PStashTest.cpp
//{L} PStash
// Test of pointer Stash
#include "PStash.h"
#include "exercise11.hpp"
//#include "../require.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	Asteroid AsteroidStash;

	// 'new' works with built-in types, too. Note
	// the "pseudo-constructor" syntax:

	for(int i = 0; i < 25; i++)
		AsteroidStash.add(new Asteroid(i));

	for(int j = 0; j < AsteroidStash.count(); j++)
		cout << "intStash[" << j << "] = "<< AsteroidStash[j] << *(AsteroidStash[j]) <<endl;
		//cout << "intStash[" << j << "] = "<< AsteroidStash[j] << endl;
	// Clean up:
	for(int k = 0; k < AsteroidStash.count(); k++)
		delete AsteroidStash.remove(k);

} ///:~
