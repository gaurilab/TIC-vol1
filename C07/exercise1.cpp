#include <iostream>
#include <fstream>
#include <string>
#include <cassert>

using namespace std;


class Text{

	string filecontents;
public:
	Text()
	{
	}
	Text(string filename)
	{
	 	printf("File name =%s",filename.c_str() );

		ifstream in(filename.c_str());
		//ifstream in("exercise1.cpp");
		assert(in!=0);
		string line;
		while(getline(in, line))
		{
		filecontents =filecontents+line;	
		filecontents =filecontents +"\n";
		}

	}
	string contents()const
	{
		return filecontents;
	}
};

int main()
{
	Text t("exercise1.cpp");
	cout<<t.contents();
	while(1);
}
