/*Create a function that takes a float by value. Inside the
function, bind a const float& to the argument, and only
use the reference from then on to ensure that the
argument is not changed.*/

void functionx(float f)
{
 const float &rf=f;
 rf++;
}

int main()
{
float f=123.45;
functionx(f);
}
