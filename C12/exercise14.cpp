/*Write a class called Bird that contains a string member
and a static int. In the default constructor, use the int to
automatically generate an identifier that you build in the
string, along with the name of the class (Bird #1, Bird #2,
etc.). Add an operator<< for ostreams to print out the
Bird objects. Write an assignment operator= and a copyconstructor.
In main( ), verify that everything works
correctly*/

#include <string>
#include <iostream>

using namespace std;

class Bird{
	std::string bird_name;
	static const size_t SZ=10;
	static int i;
	public:
	Bird(){
	 char	bird_name_temp[SZ]={0};
		snprintf(bird_name_temp,sizeof(bird_name_temp),"%s%d","Bird",++i);
		bird_name=bird_name_temp;
	}
	Bird(const Bird& b1){
		this->bird_name=b1.bird_name;
	}
	Bird& operator=(const Bird& b1){
		if(this != &b1)
		 this->bird_name=b1.bird_name;
		return *this;
	}
	friend ostream& operator<<(ostream &out , const Bird& b1)
	{
		out<<"       Bird Instance --> "<<b1.bird_name<<endl;
		return out;
	}
};

int Bird::i;
int main()
{
	Bird b1;
	Bird b2;
	Bird b3;
	Bird b4;
	Bird b5;
	cout<<b1<<b2<<b3<<b4<<b5;
}
