/*
Create two classes called Traveler and Pager without
default constructors, but with constructors that take an
argument of type string, which they simply copy to an
internal string variable. For each class, write the correct
copy-constructor and assignment operator. Now inherit a
class BusinessTraveler from Traveler and give it a
member object of type Pager. Write the correct default
constructor, a constructor that takes a string argument, a
copy-constructor, and an assignment operator.
*/
#include <iostream>
#include <string>
using namespace std;
class Traveler{
protected:
	string traveler_string;
public:
	Traveler(string ss ):traveler_string(ss){cout<<"Calling function  "<<__func__<<"\ttraveler_string="<<traveler_string<<endl;}
	Traveler(const Traveler & tr)	
	{
		cout<<"Calling function Traveler(const Traveler & tr) "<<__func__<<endl;
		traveler_string=tr.traveler_string;
	}
	Traveler& operator=(const Traveler& tr)
	{
		cout<<"Calling function Traveler& operator=(const Traveler& tr)  "<<__func__<<endl;
		this->traveler_string=tr.traveler_string;
		return *this; 
	
	}
};

class Pager
{	
	protected:
	string pager_string;
	public:
	Pager(string ss):pager_string(ss){cout<<"Calling function Pager(string ss)  "<<__func__<<"\tpager_string="<<pager_string<<endl;}

	Pager(const Pager &pr)	
	{
		cout<<"Calling function Pager(const Pager &pr) "<<__func__<<endl;
		pager_string= pr.pager_string;
	}
	Pager& operator=(const Pager& pr)
	{
		cout<<"Calling function Pager& operator=(const Pager& pr)  "<<__func__<<endl;
		this->pager_string=pr.pager_string;
		return *this; 
	}
	

};

class BusinessTraveler: public Traveler{
protected:
Pager p;
	public:
	BusinessTraveler(string ss):Traveler(ss+"traveller"),p(ss+"pager")
	{
	cout<<"Calling function BusinessTraveler(string ss)  "<<__func__<<endl;
	}
	

	BusinessTraveler(const BusinessTraveler& br):Traveler(br.traveler_string),p(br.p)
	{
		cout<<"Calling function BusinessTraveler(const BusinessTraveler& br)  "<<__func__<<endl;
		//Traveler(t);
	}

	BusinessTraveler& operator=(const BusinessTraveler& br)
	{
	cout<<"Calling function BusinessTraveler& operator=  "<<__func__<<endl;
		p=br.p;
	//	Traveler t("HAve to be assigned");
		traveler_string =br.traveler_string;
		return *this;
	}

};

int main()
{
	BusinessTraveler bt("Test");
//	BusinessTraveler bt1("Test1");
	BusinessTraveler bt1=bt;
//	BusinessTraveler bt2("Test2");
//	bt1=bt2;
}
