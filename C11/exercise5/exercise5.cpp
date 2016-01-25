#include <iostream>

class sample{
	
	public:
		int m_i;
		sample(int i=0):m_i(i){ //initalizers list
		}
		void memfunc(){
			printf("\n %s called\n",__func__);
		}
		void memfunc1() const{
			printf("\n %s const  called\n",__func__);
		}
		void memfunc2(){
			printf("\n %s called\n",__func__);
		}
		void memfunc3() const{
			printf("\n %s const called\n",__func__);
		}
	//	friend sample& operator=(int){
	//	}
};
#if 1
void func1(const sample *pInt)
{
//	pInt->memfunc(); //As the function is non-const 
	pInt->memfunc1();
//	pInt->memfunc2();//As the function is non-const
	pInt->memfunc3();
}
#endif

#if 1
const sample& func(const sample *pInt)
{
	/*
	//sample S;
	//return S;
	*/
//	sample *pS=const_cast<sample*>(pInt);
//	return *pS;

return (*pInt);
}
#endif


int main()
{
sample i(10);

sample &l_ref_to_sample=i;

const sample  &l_ref_return=func(&i);
 
func1(&i);
//func(&i)=i;
//sample  l_ref_return=func(&i);

//printf("\n The value returned =%d\n",l_ref_return.m_i);


}
