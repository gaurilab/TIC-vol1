/*
Create a class with two static member functions. Inherit
from this class and redefine one of the member functions.
Show that the other is hidden in the derived class.
*/
#include <iostream>
#include <string>
using namespace std;
class X{
public:
 static void  mfunc1(string)/*const*/ {
	cout<<"Calling function X:"<<__func__<<endl;
	}
 static void  mfunc2(){
	cout<<"Calling function X:"<<__func__<<endl;
	}
};

class XX: public X{
public:
static void  mfunc1(){
	cout<<"Calling function XX::"<<__func__<<endl;
        }

};

int main()
{
	string ss;
	XX::mfunc2();
//	XX::mfunc1(ss);
}
