#include <iostream>
using namespace std;

class person
{
	private:
	char name[10];
	int age;
	public:
	void getperson();
	void displayperson();
	person & checkelder(person &x);
};
void person::getperson()
{
	cout<<"Enter Name:";
	cin>>name;
	cout<<"Enter Age:";
	cin>>age;	
}
void person::displayperson()
{
	cout<<" Name:";
	cout<<name;
	cout<<" Age:";
	cout<<age;	
}
person & person::checkelder(person & x)
{
	if (age>x.age)
	{
		return *this;
	}
	else
		return x;
}
int main()
{
	person p1 ,p2,p;
	p1.getperson();
	p2.getperson();
	p=p1.checkelder(p2);
	p.displayperson();
	return 0;
}
