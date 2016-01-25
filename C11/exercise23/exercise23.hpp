#ifndef EXERCISE_23_HPP
#define EXERCISE_23_HPP
#include <iostream>
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


#endif //
