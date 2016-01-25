/*Make a new version of ConstPointer.cpp called
ConstReference.cpp which demonstrates references
instead of pointers*/



void t(int&) {
}

void u(const int& cip) {
//!cip = 2; // Illegal -- modifies value  //error: assignment of read-only reference #cip#
int i = cip; // OK -- copies value
int ip2 = cip; // reference to a constant integer  can be assigned to a integer
}

const char* v() {
// Returns address of static character array:
return "result of function v()";
}

const int& w() {
static int i;
return i;
}

int main() {
int x = 0;
int& ip = x;
const int& cip = x;
t(ip); // OK
//!t(cip); // Not OK  //error: invalid initialization of reference of type #int&# from expression of type #const int#
u(ip); // OK
u(cip); // Also OK
//char* cp = v(); // Not OK  
const char* ccp = v(); // OK
//int* ip2 = w(); // Not OK 
const int& cip2 = w(); // OK
//!*w() = 1; // Not OK 
}
