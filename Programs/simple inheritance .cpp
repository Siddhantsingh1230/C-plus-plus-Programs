//Simple inheritance


#include <iostream>

using namespace std;

class A
{
	public:
	int a;
	void getA();
	void putA();
};
void A::getA()
{
	cout<<"Enter A:";
	cin>>a;
}
void A::putA()
{
	cout<<"A:"<<a;
};
class B : public A
{
	public:
	int b;
	void getB();
	void putB();
};
void B:: getB()
{
	cout<<endl;
	cout<<"Enter B:";
	cin>>b;
}
void B:: putB()
{
	cout<<"B:"<<b;
}
int main()
{
	B b1;
	b1.getA();
	b1.putA();
	b1.getB();
	b1.putB();
	return 0;
}
