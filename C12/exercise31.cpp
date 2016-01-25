
class Orange {};
class Pear {};

class Apple {
public:
//operator Orange() ;
operator Orange() const{
return Apple();
}
operator Pear() const{
return Apple();
}
//operator Pear();
};
// Overloaded eat():
void eat(Orange){
}
void eat(Pear){
}
int main() {
Apple c;
 //eat(c); //error: call of overloaded ‘eat(Apple&)’ is ambiguous
 eat((Orange)c); //error: call of overloaded ‘eat(Apple&)’ is ambiguous
// Error: Apple -> Orange or Apple -> Pear ???
}
