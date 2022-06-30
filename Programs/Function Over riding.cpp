// Function OverRiding is Used generally in Multiple inheritance

#include <iostream>

using namespace std;

class A
{
	public:
	void show()
	{
		cout<<"A is displayed\n";
	}
};
class B
{
	public:
	void show()
	{
		cout<<"B is displayed\n";
	}
};
class C:public B,public A
{
	public:
	void display()
	{
		A::show();
		B::show();
		cout<<"C is displayed\n";
	}
};
int main()
{
	C obj;
	obj.display();
	return 0;
}
