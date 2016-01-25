/*
Create a class that contains a single private char.
Overload the iostream operators << and >> (as in
IostreamOperatorOverloading.cpp ) and test them. You
can test them with fstreams, stringstreams, and cin and
cout.
*/
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;
class C
{
 public:
 char c;
 C(char cc='0'):c(cc){}
 friend ostream& operator<<(ostream& out,const C&); 

 //friend istream& operator<<(istream& in,const C&); // it is giving segmentation fault as the C paramter is const and the constructor is getting called many times
 friend istream& operator<<(istream& in,C&); // it is giving segmentation fault as the C paramter is const and the constructor is getting called many times
};
istream& operator>>(istream& in,C &cc)
{
  in>>cc.c;
  return in;
}
ostream& operator<<(ostream& out,const C &cc)
{
  out<<cc.c<<" _";
  return out;
}

int main()
{
stringstream input("c");
C I;
input>>I;
cout<<I;
}
