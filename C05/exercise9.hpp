#ifndef __EXCERCISE_9__
#define __EXCERCISE_9__

class Stash {
	public:
	int size; // Size of each space
	int quantity; // Number of storage spaces
	int next; // Next empty space
	// Dynamically allocated array of bytes:

	unsigned char* storage;
	// Functions!
	//void initialize(int size);
	Stash(int size=100);
	//void cleanup();
	~Stash();
	int add(const void* element);
	void* fetch(int index);
	int count();
	void inflate(int increase);
}; ///:~
#endif
