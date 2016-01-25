/*
   Modify InheritStack2.cpp to use a vector<string>
   instead of a Stack.
 */

//: C14:InheritStack2.cpp
// Composition vs. inheritance
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cassert>

using namespace std;
typedef std::vector<std::string*> Stack;


class StringStack {
	vector <string *> stack; // Embed instead of inherit
	public:
	void push(string* str) {
//		cout<<"value of PUSH str"<<hex<<str<<"--->"<<*str<<endl;
		stack.push_back(str);
	}
	string* pop() {
		if(!stack.empty())
		{	
			//string* r_str= stack.back();
			string* r_str= stack.front();
		//	cout<<"value of POPstr"<<hex<<r_str<<"--->"<<dec<<*r_str<<endl<<endl;
			//stack.pop_back();
			stack.erase (stack.begin());
			return r_str;
		}
		else
		{
			return 0;
		}
	}
};
int main() {
	ifstream in("ex25.cpp");
	string line;
	StringStack textlines;
	while(getline(in, line))
		{
		//string *sss=new string(line);
		//cout<<"value of sss"<<hex<<sss<<dec<<"---->"<<*sss<<endl;
		textlines.push(new string(line));
		//textlines.push(sss);
		}
	string* s;
	while((s = textlines.pop()) != 0) // No cast!
	{
		assert(s!=NULL);
		cout<< *s << endl;
	}
} ///:
