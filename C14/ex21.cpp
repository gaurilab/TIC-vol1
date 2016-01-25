/*
Modify Instrument.cpp to add a prepare( ) method to
Instrument. Call prepare( ) inside tune( ).
*/
//#include <iostream>
typedef char note;

class Instrument {
public:
void play(note) const {}
note prepare() const {}
};
// Wind objects are Instruments
// because they have the same interface:
class Wind : public Instrument {};
void tune(Instrument& i) {
// ...
note middleC = i.prepare();
i.play(middleC);

}
int main() {
Wind flute;
tune(flute); // Upcasting
} ///:~
