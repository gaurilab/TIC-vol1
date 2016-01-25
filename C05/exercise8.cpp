#include<iostream>
using namespace std;
class X{
private:
int a;
protected:
int b;
public:
int c;
void showMap()
{
cout<<"Address of a "<<&a<<endl;
cout<<"Address of b "<<&b<<endl;
cout<<"Address of c "<<&c<<endl;
}
};
int main()
{
X x;
x.showMap();

}
