#include <iostream>

using namespace std;

class A
{
	public:
	A()
	{
		cout<<"A constructor\n";
	}
};
class B: public A
{
	public:
	B()
	{
		cout<<"B constructor\n";
	}
};
class C:virtual public B
{
	public:
	C()
	{
		cout<<"C constructor\n";
	}
};
int main()
{
	C obj;
	return 0;
}
