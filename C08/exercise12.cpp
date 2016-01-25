/*
Create a character array literal with a pointer that points
to the beginning of the array. Now use the pointer to
modify elements in the array. Does your compiler report
this as an error? Should it? If it doesnt, why do you think
that is?
*/
#include <iostream>
#include <cassert>
using namespace std;
//char* str="abcdefghijklmanopw"; // gives core dump why  //SIGSEV
char str[]="abcdefghijklmanopw";
int main()
{
 char *p= str;

  assert (p != NULL);
 while (*p != '\0')
 {
 	cout<<*p<<endl;
	assert (p != NULL);
	 *p+=1;
 	cout<<*p<<endl;
	 p++;
 }
p= str;
 while (*p != '\0')
 	cout<<*p++<<endl;
}
