/*
Create a class containing a string, with a constructor that
initializes the string from its argument, and a print( )
function to display the string. Create another class that
contains both const and non-const static arrays of objects
of the first class, and static methods to print out these
arrays. Exercise this second class in main( ).
*/
#include <iostream>
using  namespace std;
class X{
string ss;
public:
X(string s=""):ss(s){}
void print()const {cout<<"Value of String is "<<ss<<endl;}
};

class containX{
	static const size_t SZ=2;
	static const  X starrX[SZ];
	static X arrX[SZ];
	public:
	containX(){
	}
	void print() const
	{
		for (int i =0;i<SZ;i++)
			arrX[i].print();
		cout<<"================="<<endl;
		for (int i =0;i<SZ;i++)
			starrX[i].print();
	}

};
X containX :: arrX[SZ]={X(),X()}; 
const X containX :: starrX[SZ]={X("const2"),X("const1")};

int main()
{
	containX aa;
	aa.print();
}
