/*

Create a class that represents a printer connection, and
that only allows you to have one printer.

*/

#include <iostream>
#include <fstream>

using namespace std;

ofstream out("ex30.out");

class PrinterConnection{
	public:
		PrinterConnection(){out<<"Calling function Printer::"<<__func__<<std::endl;}
		~PrinterConnection(){out<<"Calling function Printer::"<<__func__<<std::endl;}
		class Printer{
		public:
			Printer(){
			out<<"Calling function Printer::"<<__func__<<std::endl;
			}
			~Printer(){
			out<<"Calling function Printer::"<<__func__<<std::endl;
			}
			void Print() const{
			out<<"Calling function Printer::"<<__func__<<std::endl;
			}

		};
		static Printer onlyPrinter;
		PrinterConnection::Printer& getPrinter() const{
		out<<"Calling function Printer::"<<__func__<<std::endl;
		out<<"Printer::"<<__func__<<"Address of onlyPrinter"<<&onlyPrinter<<std::endl;
			return onlyPrinter; }

};

PrinterConnection::Printer PrinterConnection::onlyPrinter;

int main()
{
	PrinterConnection pConn;
	PrinterConnection::Printer p = pConn.getPrinter();
	p.Print();
	PrinterConnection pConn2;
	PrinterConnection::Printer p2 = pConn2.getPrinter();
	p2.Print();

	PrinterConnection pConn1;
	PrinterConnection::Printer p1 = pConn1.getPrinter();
	p1.Print();
	return 0;
}

