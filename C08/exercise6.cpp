/*
Create a const array of char, then try to change one of the
chars.
*/

#include <iostream>

int main()
{

const char arr[]="asdklfjasdnfaklsdjfm,asdfkasjdfabsfabsdbfasbdafsdjfajsb";
arr[17]='u'; //exercise6.cpp:12: error: assignment of read-only location
}
