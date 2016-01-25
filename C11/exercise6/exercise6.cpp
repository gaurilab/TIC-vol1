
#include <iostream>
using namespace std;
void increment(int*& i) { i++; }
void incrementconst(int* const  &i) {  } const //the integer pointed is not constant but the pointer is constant
void incrementconst(const int* const  &i) {  } const // the integer pointed by the pointer i is constant as well as the pointer is also constant

void func(int*& ppInt) //referr
{
//	printf("\n %x\n",&ppInt);
//	printf("\n 0x%x\n",ppInt);
//	printf("\n 0d%d\n",*ppInt);
}
class sample{
int m_i;
public:
sample(int i=0):m_i(i){
printf("\n constructor called\n");}
};

void passtemp(const sample &a_sample)
{
 
}
int main()
{
int ii = 47;
int* ip = &ii;
func(ip);
int i[] = {0,1,4,6,2};
int *p = &i[0];
cout << "i = " <<hex<<i << endl;

increment(p);
//increment(&i[0]); // temporary variable is passed of 
incrementconst(&i[0]); // temporary variable is passed of 

passtemp(sample(1));
cout << "i = " <<hex<<i << endl;
}
