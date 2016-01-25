/* 2. Create a Message class with a constructor that takes a
   single string with a default value. Create a private
   member string, and in the constructor simply assign the
   argument string to your internal string. Create two
   overloaded member functions called print( ): one that
   takes no arguments and simply prints the message stored
   in the object, and one that takes a string argument, which
   it prints in addition to the internal message. Does it make 
   sense to use this approach instead of the one used for the
   constructor?*/

/* The approach to taken for the constructor should be taken as no desiciion has been taken on the default argument */

#include <iostream>
#include <string>

using namespace std;
class Message{
	private:
		string m_str;
	public:
		Message(string str="")
		{
			m_str=str;
		}
		void print(string s="" ){
			cout<<s<<m_str<<endl;
		}

};
int main()
{
	Message m("This is a test Message");
	m.print();
}

