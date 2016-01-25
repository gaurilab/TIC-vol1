#include <iostream>
#include <cstring>
using namespace std;

typedef unsigned char byte;

class Mem {
byte* mem;
int size;
void ensureMinSize(int minSize);
public:
Mem();
Mem(int sz);
~Mem();
int msize();
byte* pointer();
byte* pointer(int minSize);
};

Mem::Mem() { mem = 0; size = 0; }

Mem::Mem(int sz) {
mem = 0;
size = 0;
ensureMinSize(sz);
}

Mem::~Mem() { delete []mem; }

int Mem::msize() { return size; }

void Mem::ensureMinSize(int minSize) {
if(size < minSize) {
byte* newmem = new byte[minSize];
memset(newmem + size, 0, minSize - size);
memcpy(newmem, mem, size);
delete []mem;
mem = newmem;
size = minSize;
}
}

byte* Mem::pointer() { return mem; }

byte* Mem::pointer(int minSize) {
ensureMinSize(minSize);
return mem;
} ///:~




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
//os <<(char*)buf->pointer()<<endl;
os<<"";
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
