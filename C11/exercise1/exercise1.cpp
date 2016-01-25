#include <iostream>

typedef struct bird{
}bird;

typedef struct rock{
}rock;

int main()
{
	bird* b;
	rock* r;
	void* v;
	v = r;
	b = v;

}
