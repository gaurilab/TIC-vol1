#include <iostream>

class Base{

        public:
                Base(){
                        std::cout <<" Base()"<< std::endl;
                }
                Base (const Base & p )
                {
                        std::cout <<" Base(const Base &)"<< std::endl;
                }
                Base & operator=(const Base &)
                {
                        std::cout <<" Base& operator=(const Base &)"<< std::endl;
			return *this;
                }
                ~Base()
                {
                        std::cout <<" ~Base()"<< std::endl;
                    
                 }


};

class ParentMember{

        public:
                ParentMember(){
                        std::cout <<" ParentMember()"<< std::endl;
                }
                ParentMember (const ParentMember & p )
                {
                        std::cout <<" ParentMember(const ParentMember &)"<< std::endl;
                }
                ParentMember & operator=(const ParentMember &)
                {
                        std::cout <<" ParentMember& operator=(const ParentMember &)"<< std::endl;
			return *this;
                }
                ~ParentMember()
                {
                        std::cout <<" ~ParentMember()"<< std::endl;
                    
                 }


};



class Parent:public Base{
	ParentMember P1;
        public:
                Parent(){
                        std::cout <<" Parent()"<< std::endl;
                }
                Parent (const Parent & p )
                {
                        std::cout <<" Parent(const Parent &)"<< std::endl;
                }
                Parent & operator=(const Parent &)
                {
                        std::cout <<" Parent& operator=(const Parent &)"<< std::endl;
			return *this;
                }
                ~Parent()
                {
                        std::cout <<" ~Parent()"<< std::endl;
                    
                 }


};
class Member{

        public:
                Member(){
                        std::cout <<" Member()"<< std::endl;
                }
                Member (const Member & p )
                {
                        std::cout <<" Member(const Member &)"<< std::endl;
                }
                Member & operator=(const Member &)
                {
                        std::cout <<" Member& operator=(const Member &)"<< std::endl;
			return *this;
                }
                ~Member()
                {
                        std::cout <<" ~Member()"<< std::endl;
                    
                 }


};


class child :public Parent
{
Member m1;
};

int main()
{
std::cout << "============================================================" <<std::endl;
{
child c1 ;
std::cout << "============================================================" <<std::endl;
child c2=c1;

std::cout << "============================================================" <<std::endl;
c1=c2;
std::cout << "============================================================" <<std::endl;
}
std::cout << "============================================================" <<std::endl;
{
Parent p1;
std::cout << "============================================================" <<std::endl;
Parent p2(p1);
std::cout << "============================================================" <<std::endl;
p1 =p2 ;
std::cout << "============================================================" <<std::endl;
}
std::cout << "============================================================" <<std::endl;
}
