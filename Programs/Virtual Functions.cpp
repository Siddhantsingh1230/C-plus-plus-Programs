// Virtual Function 

#include <iostream>

using namespace std;

 class  A
{
	public:
	void virtual show();
	//(or)void virtual show();
	
};

void A:: show()
{
	cout<<"A Show"<<endl;
}
class B : public A
{
	public:
	void show();
};
void B:: show()
{
	cout<<"B Show"<<endl;
}
int main()
{
	A *a_ptr,a;
	B b_obj;
	a_ptr=&a;
	a_ptr->show();
	a_ptr=&b_obj;
	a_ptr->show();
	return 0;
}
