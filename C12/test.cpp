#include <iostream>

using namespace std;
class X{
public:
	X(){
		cout<<"Constructor X called"<<endl;
		try{
		//throw 1;
		throw ;
		}catch(const int& i){
			    cout<<"Exception in X"<<i<<endl;
		}
		catch(...)
		{
			cout<<"Exception in X"<<endl;
		}
	}
};

X x1;

int main() try {
throw "main is throwing exception";
} catch(const char* msg) {
cout << msg << endl;
} 
