/*Create a class containing a const member that you initialize in the constructor initializer list and an untagged enumeration that you use to determine an
array size.*/


class X{
 const int m1;
 enum { SZ =10}; 
 int arr[SZ];
public:
X():m1(5){}
};

int main()
{
 X x;
}
