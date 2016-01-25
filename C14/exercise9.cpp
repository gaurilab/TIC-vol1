/*
Inherit a class StringVector from vector<void*> and
redefine the push_back( ) and operator[] member
functions to accept and produce string*. What happens if
you try to push_back( ) a void*
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

typedef vector<void*> std_vector;

class StringVector:public std_vector{
//void push_back ( const T& x );
public:
void push_back(string&  x){
	void* X= &x;
 	vector<void* >::push_back(X);		
	}
	string& operator[](int i)
	{
	void* l_ret =vector<void*> :: operator[](i);
	return *((string*)l_ret);
	}
};

int main()
{
	StringVector svlist;
	string s1("ABC");
	string s2("ABC123");
	string s3("ABCD");
	string s4("ABCDE");
	string s5("ABCDEF");
	svlist.push_back(s1);
	svlist.push_back(s2);
	svlist.push_back(s3);
	svlist.push_back(s4);
	svlist.push_back(s5);
	for( int i=0;i<5;i++)
	cout<<svlist[i]<<endl;
	
	int xxx=9;
	void *la =&xxx;
	//svlist.push_back(la); //o matching function for call to ‘StringVector::push_back(void*&)
//	cout<<svlist[6]<<endl;//no matching function for call to ‘StringVector::push_back(void*&)
	
}
