/*

Without including a header file, declare the function
puts( ) from the Standard C Library. Call this function
from main( ).
*/
extern "C"{
int puts(const char *s);
}
int main()
{
puts("I am not fool");
}
