
namespace A
{
int a ;
int b ;
}
namespace B
{
int b ;
}

namespace C
{
using namespace A;
using B::b;
}
int main()
{
	using namespace C;
	b=10;

}
