/*Create a class that contains a pointer, and demonstrate
that if you allow the compiler to synthesize the operator=
the result of using that operator will be pointers that are
aliased to the same storage. Now fix the problem by
defining your own operator= and demonstrate that it
corrects the aliasing. Make sure you check for selfassignment
and handle that case properly.*/
#include <iostream>
#include <exception>
using namespace std;
class store{
	public:
	int *pi;
	bool heap_used;
	store(int* ii=0):pi(ii),heap_used(false) 
	{
		try{
			if(!pi)
				{
				pi=new int;
				heap_used=true;
				}
			else
				pi =ii;
		}catch(std::bad_alloc & e)
		{
			std::cout<<"Allocation failed for the store"<<endl;
		}

	}
	store(store &ss){
		std::cout<<" store CC  called"<<endl;	
		if(!pi)
                {
                        this->pi= new int;
                        heap_used=true;
                }
                *this->pi=*ss.pi;
	}
	store& operator=(const store& ss){
		if(&ss == this)
		{
			std::cout<<"&ss == this "<<endl;
			return *this;
		}
		if(!pi)
		{
			this->pi= new int;
			heap_used=true;
		}
		*this->pi=*ss.pi;
		return *this;
	}
        ~store()
	{
		std::cout<<" ~store called"<<std::hex<<pi<<endl;	
		if(heap_used)
		delete pi;
	}
};

int main()
{
 int x=9;
 store s1(&x);
 std::cout<<s1.pi<<"-->"<<*s1.pi<<endl;
 store s2;
 s2=s1;
 std::cout<<s2.pi<<"-->"<<*s2.pi<<endl;
 s2=s2;
 std::cout<<s1.pi<<"-->"<<*s1.pi<<endl;
 store s3(s2);
 std::cout<<s3.pi<<"-->"<<*s3.pi<<endl;
}
