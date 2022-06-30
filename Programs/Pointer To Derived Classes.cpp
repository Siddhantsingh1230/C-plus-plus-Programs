// Base Class Pointer can Point towards any objects of descendant classes

#include <iostream>

using namespace std;

class A
{
	public :
	int a;
	void display();
};
void A:: display()
{
	cout<<" A:"<<a<<endl;
	
}
class B : public A
{
	public :
	int b;
	void display();
};
void B:: display()
{
	cout<<" B:"<<b<<endl;
	
}
int main()
{
	A a1;
	B b1;
	A *a_ptr;
	B *b_ptr;
	a_ptr=&a1;
	a_ptr->a=17;
	b_ptr=&b1;
	b_ptr->b=10;
	a_ptr->display();
	b_ptr->display();
	cout<<"________________\n\n";
	a_ptr=&b1;
	((B*)a_ptr)->b=23; // Type Casting needs to be done to use Base class pointer.
	((B*)a_ptr)->display();
	(a_ptr)->display();
	return 0;
}
