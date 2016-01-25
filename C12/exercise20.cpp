/*
Attempt to create a non-member operator= for a class
and see what kind of compiler message you get.
*/

class X{
int ii;
public:
friend  X& operator=(X &x,int i);
};

X& operator=(X &x,int i)
{
 x.ii=i;
 return x; 
}

int main()
{
X i;
 i=10;
}
