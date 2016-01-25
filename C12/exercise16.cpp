/*Add an int data member to both Bird and BirdHouse in
Exercise 15. Add member operators +, -, *, and / that use
the int members to perform the operations on the
respective members. Verify that these work.*/

#include <string>
#include <iostream>

using namespace std;

class Bird{
        std::string bird_name;
	int bird_id;
        static const size_t SZ=10;
        static int i;
        public:
        Bird(int id=0):bird_id(id){
         char   bird_name_temp[SZ]={0};
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
                out<<" Bird Instance --> "<<b1.bird_name<<" Bird Instance Id -->"<<b1.bird_id<<endl;
                return out;
        }
};

int Bird::i;

class BirdHouse{
Bird *pb;
Bird ob;
Bird& rb;
int bird_house_id;
BirdHouse(const BirdHouse&);
BirdHouse operator=(const BirdHouse&);
public:
BirdHouse(Bird b1,Bird b2,Bird b3,int id=0):pb(&b1),ob(b2),rb(b3),bird_house_id(id){
}
friend ostream& operator<<(ostream& out,const BirdHouse& b1)
{
 out<<"BirdHouse Instance"<<*b1.pb<<b1.ob<<b1.rb<<b1.bird_house_id;
 return out;
}
};

int main()
{
Bird b1,b2,b3;
BirdHouse bh(b1,b2,b3);
BirdHouse bh1(b1,b2,b3);
cout<<bh<<bh1;
}
