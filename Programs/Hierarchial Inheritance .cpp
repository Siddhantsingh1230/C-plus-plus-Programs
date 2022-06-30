﻿//Heirarchial inheritance.

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

class C : public A
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
int main()
{
	B b;
	C c;
	cout<<"Using B object"<<endl;
	b.getA();
	b.putA();
	cout<<"\nUsing C object"<<endl;
	c.getA();
	c.putA();
	cout<<"\n___________________\n";
	b.getB();
	b.putB();
	c.getC();
	c.putC();
	return 0;
}
