// This Pointer Demonstration
#include <iostream>

using namespace std;

class A
{
	private:
	int a;
	public :
	void get_data(int a);
	void display_data();
	
};
void A:: get_data(int a)
{
	this->a=a;
}
void A:: display_data()
{
	cout<<"A:"<<a<<endl;
}
int main()
{
	A obj;
	obj.get_data(17);
	obj.display_data();
	return 0;
}
