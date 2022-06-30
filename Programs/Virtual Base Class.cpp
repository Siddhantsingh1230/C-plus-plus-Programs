/*Here to Avoid State of Ambiguity I have created Virtual base class....
________________________________________________*/

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

class B : public virtual A//(or)virtual public A
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

class C : public virtual A //(or)virtual public A
{
	public:
	int c;
	void getC();
	void putC();
};
void C:: getC()
{
	cout<<endl;
	cout<<"Enter C:";
	cin>>c;
}
void C:: putC()
{
	cout<<"C:"<<c;
}
class D : public B,public C
{
	public:
	int d;
	void getD();
	void putD();
};
void D:: getD()
{
	cout<<endl;
	cout<<"Enter D:";
	cin>>d;
}
void D:: putD()
{
	cout<<"D:"<<d;
}
int main()
{
	D d;
	cout<<"Using D object"<<endl;
	d.getA();
	d.putA();
	d.getB();
	d.putB();
	d.getC();
	d.putC();
	d.getD();
	d.putD();
	return 0;
}
