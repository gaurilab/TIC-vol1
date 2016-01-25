/*Modify Car.cpp so that it also inherits from a class called
  Vehicle, placing appropriate member functions in
  Vehicle (that is, make up some member functions). Add
  a nondefault constructor to Vehicle, which you must call
  inside Cars constructor.*/

// Public composition
#include <iostream>
using namespace std;
class Engine {
	public:
		void start() const {
		cout<<"Called Function  "<<__func__<<endl;
			}
		void rev() const {
		cout<<"Called Function  "<<__func__<<endl;
		}
		void stop() const {
		cout<<"Called Function  "<<__func__<<endl;
		}
};
class Wheel {
	public:
		void inflate(int psi) const {
		cout<<"Called Function  "<<__func__<<endl;
			}
};
class Window {
	public:
		void rollup() const {
		cout<<"Called Function  "<<__func__<<endl;
}

		void rolldown() const {
		cout<<"Called Function  "<<__func__<<endl;
	}
};
class Door {
	public:
		Window window;
		void open() const {
		cout<<"Called Function  "<<__func__<<endl;
		}
		void close() const {
		cout<<"Called Function  "<<__func__<<endl;
		}
};
class Vehicle{
	const char* vehicle_type;
	public:
	
	Vehicle(const char* c):vehicle_type(c){
		cout<<"Called Function  "<<__func__<<" ====  "<<vehicle_type<<endl;
	}
	void cleanWindow()const
	{
		cout<<"Called Function  "<<__func__<<endl;
	}
};
class Car :public Vehicle{
	public:
		Car():Vehicle("abcf"){
		cout<<"Called Function  "<<__func__<<endl;
}
		Engine engine;
		Wheel wheel[4];
		Door left, right; // 2-door
};
int main() {
	Car car;
	car.left.window.rollup();
	car.wheel[0].inflate(72);
} ///:~
