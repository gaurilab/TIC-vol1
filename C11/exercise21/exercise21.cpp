#include <iostream>


class DoubleRef {
	double *model_number;
	DoubleRef(const DoubleRef& d , const double ad=0.000){
		try{
			model_number =new double;
			*model_number= *(d.model_number);
			printf("\n copy constructor called for DoubleRef model_number =%f %p\n",*model_number, model_number);
		}
		catch(...)
		{
			printf("\n new failed in copy constructor\n");
			//      exit(0);
		}

	}

	public:
	~DoubleRef(){
		//printf("\n destructor called for DoubleRef\n");
		*model_number=-1; 	
		printf("\n destructor called for DoubleRef  model_number =%f %p\n",*model_number, model_number);
		try{
			delete model_number;
		}
		catch(...)
		{
			printf("\n  delete failed\n");
			//	exit(0);
		}
	}

	DoubleRef(double d=0){
		try{
			model_number =new double;
			printf("\n constructor called for DoubleRef model_number = %p\n", model_number);
		}
		catch(...)
		{
			printf("\n new failed\n");
			//	exit(0);
		}
		*model_number=d; 	
	}
	void setDoubleRef(double d=0)
	{
		*model_number=d;

	}
	void printDoubleRefDetails(){

		printf("\n Printting the car details %f %p \n",*model_number,model_number);
	}
};
DoubleRef getDoubleRef(int i)
{
	DoubleRef c(i);
	return c;
}

DoubleRef setModelNumber(DoubleRef value){
	value.setDoubleRef(5096.2234);
	return value;
}

void printDoubleRefModel(DoubleRef C)
{
	C.printDoubleRefDetails();
}

int main()
{
	DoubleRef c;
	//DoubleRef c1;
	printDoubleRefModel(c);
//	printf("\n calling getDoubleRef\n");
//	c = getDoubleRef(10);	
	printDoubleRefModel(c);
//	c1=setModelNumber(c);
//	printDoubleRefModel(c);
//	printDoubleRefModel(c1);


}

