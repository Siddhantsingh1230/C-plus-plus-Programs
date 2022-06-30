//	Pure Virtual Function for Achieving Abstraction in Classes..

#include <iostream>

using namespace std;

class shape
{
	public:
	int x,y;
	virtual void area()=0;
};
class rectangle : public shape
{
	public :
	void area()
	{
		cout<<"Area of Reactangle:"<<x*y<<endl;
	}
};
class triangle : public shape
{
	public :
	void area()
	{
		cout<<"Area of Triangle:"<<0.5*x*y<<endl;
	}
};
int main()
{
	rectangle r1;
	triangle t1;
	r1.x=10;
	r1.y=20;
	r1.area();
	t1.x=10;
	t1.y=20;
	t1.area();
	return 0;
}
