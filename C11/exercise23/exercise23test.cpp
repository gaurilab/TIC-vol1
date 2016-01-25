#include "exercise23.hpp"
#include <cstring>

using namespace std;
using std::cout;

class MyString {
Mem* buf;
public:
MyString();
MyString(char* str);
~MyString();
void concat(char* str);
void print(ostream& os);
};
MyString::MyString() { buf = 0; }
MyString::MyString(char* str) {
buf = new Mem(strlen(str) + 1);
strcpy((char*)buf->pointer(), str);
}
void MyString::concat(char* str) {
if(!buf) buf = new Mem;
strcat((char*)buf->pointer(
buf->msize() + strlen(str) + 1), str);
}
void MyString::print(ostream& os) {
if(!buf) return;
os <<(char*)buf->pointer()<<endl;
//os<<"";
}
MyString::~MyString() { delete buf; }

int main() {
MyString s("My test string");
s.print(std::cout);
s.concat(" some additional stuff");
s.print(std::cout);
MyString s2;
s2.concat("Using default constructor");
s2.print(std::cout);
} ///:~
