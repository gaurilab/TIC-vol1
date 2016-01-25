/*Write a class called BirdHouse that contains an object, a
pointer and a reference for class Bird from Exercise 14.
The constructor should take the three Birds as
arguments. Add an operator<< for ostreams for
BirdHouse. Disallow the assignment operator= and
copy-constructor. In main( ), verify that everything
works correctly. Make sure that you can chain
assignments for BirdHouse objects and build expressions
involving multiple operators.
*/
#include <string>
#include <iostream>

using namespace std;

class Bird{
        std::string bird_name;
        static const size_t SZ=10;
        static int i;
        public:
        Bird(){
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
                out<<"       Bird Instance --> "<<b1.bird_name<<endl;
                return out;
        }
};

int Bird::i;

class BirdHouse{
Bird *pb;
Bird ob;
Bird& rb;
BirdHouse(const BirdHouse&);
BirdHouse operator=(const BirdHouse&);
public:
BirdHouse(Bird b1,Bird b2,Bird b3):pb(&b1),ob(b2),rb(b3){
}
friend ostream& operator<<(ostream& out,const BirdHouse& b1)
{
 out<<"BirdHouse Instance"<<*b1.pb<<b1.ob<<b1.rb;
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
