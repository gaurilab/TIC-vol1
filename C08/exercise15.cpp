/*
Modify ConstReturnValues.cpp removing comments on
the error-causing lines one at a time, to see what error
messages your compiler generates.
*/



class X {
int i;
public:
X(int ii = 0);
void modify();
};

X::X(int ii) { i = ii; }

void X::modify() { i++; }

X f5() {
return X();
}


//const X& f9() { //gives passing #const X# as #this# argument of #X& X::operator=(const X&)# discards qualifiers
X f9() {
return X();
}
const X f6() {
return X();
}

X f10(X x) {
return x;
}

void f7(X& x) { // Pass by non-const reference 
x.modify();
}

void f8(const X& x) { // Pass by const reference 
//x.modify();
}

int main() {
f5() = X(1); // OK -- non-const return value
f5().modify(); // OK
f8(f5());
// Causes compile-time errors:
// f7(f5());//error: in passing argument 1 of #void f7(X&)# // f5() returns the const X
f9()=X(1); //46: error: passing #const X# as #this# argument of #X& X::operator=(const X&)# discards qualifiers
// f6() = X(1);//error: passing #const X# as #this# argument of #X& X::operator=(const X&)# discards qualifiers
f9().modify();
//! f6().modify(); //error: passing #const X# as #this# argument of #void X::modify()# discards qualifiers
//! f7(f6());// error: invalid initialization of non-const reference of type #X&# from a temporary of type #const X#

//f8(f10());
//f7(f10(X(1))); //error: invalid initialization of reference of type #X&# from expression of type #const X#


} ///:~

