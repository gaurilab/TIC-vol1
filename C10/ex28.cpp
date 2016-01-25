/*
Create a class containing both a const and a non-const
static array of int. Write static methods to print out the
arrays. Exercise your class in main( ).
*/
#include <iostream>
using namespace std;

class C{
	static const size_t SZ=5;
	static const int cintarr[];
	static int intarr[];
	public:
	static void print(){
		for (int i =0;i<SZ;i++)
			cout<<cintarr[i]<<"\t";
		cout<<endl;
		cout<<"================="<<endl;
		for (int i =0;i<SZ;i++)
			cout<<intarr[i]<<"\t";

	}
};

const int C::cintarr[SZ]={};
int C::intarr[SZ]={};
int main()
{
C::print();
}
