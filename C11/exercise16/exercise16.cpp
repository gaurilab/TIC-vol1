#include <iostream>


class Engine{
	public:
		Engine(){}
		Engine(const Engine &){
			printf("\n Copy constructor called for Engine\n");
		}

};

class Tyre{
	public:
		Tyre(){}
		Tyre(const Tyre &){
			printf("\n Copy constructor called for Tyre\n");
		}
};

class Car {
	int model_number;
	Tyre t[4];
	Engine e;
	public:
	Car(int model=0):model_number(model){
		printf("\n constructor called for Car\n");

	}
	void printCarDetails(){

		printf("\n Printting the car details %d \n",model_number);
	}
};
Car getCar(int i)
{
	Car c(i);
	return c;
}

void printCarModel(Car C)
{
	C.printCarDetails();
}

int main()
{
	Car c;

	printCarModel(c);
	printf("\n calling getCar\n");
	c = getCar(10);	
	printCarModel(c);


}

