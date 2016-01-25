#include <iostream>
#include <fstream>
#include <cassert>

class Stash {
	int size; // Size of each space
	int quantity; // Number of storage spaces
	int next; // Next empty space
	// Dynamically allocated array of bytes:
	unsigned char* storage;
	void inflate(int increase);
	public:
	//Stash(int size); // Zero quantity
	Stash(int size, int initQuantity=0);
	~Stash();
	int add(void* element);
	void* fetch(int index);
	int count();
};

using namespace std;
const int increment = 100;
Stash::Stash(int sz, int initQuantity) {
	size = sz;
	quantity = 0;
	next = 0;
	storage = 0;
	inflate(initQuantity);
}
#if 0
Stash::Stash(int sz, int initQuantity) {
	size = sz;
	quantity = 0;
	next = 0;
	storage = 0;
	inflate(initQuantity);
}
#endif

Stash::~Stash() {
	if(storage != 0) {
		cout << "freeing storage" << endl;
		delete []storage;
	}
}
int Stash::add(void* element) {
		if(next >= quantity) // Enough space left?
			inflate(increment);
		// Copy element into storage,
		// starting at next empty space:
		int startBytes = next * size;
		unsigned char* e = (unsigned char*)element;
		for(int i = 0; i < size; i++)
			storage[startBytes + i] = e[i];
		next++;
		return(next - 1); // Index number
}
void* Stash::fetch(int index) {
	//if(0 <= index)
	//printf("Stash::fetch (-)index");
	//	
	

	if(index >= next)
		return 0; // To indicate the end
	// Produce pointer to desired element:
	return &(storage[index * size]);
}
int Stash::count() {
	return next; // Number of elements in CStash
}
void Stash::inflate(int increase) {
	assert(increase >= 0);
	if(increase == 0) return;
	int newQuantity = quantity + increase;
	int newBytes = newQuantity * size;
	int oldBytes = quantity * size;
	unsigned char* b = new unsigned char[newBytes];
	for(int i = 0; i < oldBytes; i++)
		b[i] = storage[i]; // Copy old to new
	delete [](storage); // Release old storage
	storage = b; // Point to new memory
	quantity = newQuantity; // Adjust the size
} ///:~

int main()
{
Stash intStash((int)sizeof(int));

for(int i = 0; i < 100; i++)
{

int i=intStash.add(&i);
printf("\n Returned Index =%d \n",i);
}
 printf("\n intStash.count() =%d \n",intStash.count());

for(int j = 1; j < intStash.count(); j++)
cout << "intStash.fetch(" << j << ") = " << *(int*)intStash.fetch(j) << endl;

const int bufsize = 80;
Stash stringStash(sizeof(char) * bufsize, 100);

ifstream in("exercise6.cpp");
//assure(in, "Stash3Test.cpp");
assert(in != NULL);
string line;
while(getline(in, line))
stringStash.add((char*)line.c_str());
int k = 0;
char* cp;
while((cp = (char*)stringStash.fetch(k++))!=0)
cout << "stringStash.fetch(" << k << ") = " << cp << endl;
}
