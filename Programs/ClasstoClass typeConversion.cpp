#include <iostream>

using namespace std;
class invent1
{
	public:
	int code;
	int price;
	int qty;
	void display_data()
	{
		cout<<"Code:"<<code;
		cout<<endl;
		cout<<"Price:"<<price;
		cout<<endl;
		cout<<"Qty:"<<qty;
		cout<<endl;
	}
	invent1()
	{
		code=0;
		price=0;
		qty=0;
	}
	invent1(int a,int b,int c)
	{
		code=a;
		price=b;
		qty=c;
	}
};
class invent2
{
	private:
	int code;
	int value;
	public:
	invent2()
	{
		code=0;
		value=0;
	}
	void display_data()
	{
		cout<<"Code:"<<code;
		cout<<endl;
		cout<<"Value:"<<value;
	}
	invent2(invent1 p)
	{
		code=p.code;
		value=p.qty*p.price;
	}
};
int main()	
{
	invent1 i1(20,30,50);
	i1.display_data();
	invent2 i2;
	i2=i1;
	i2.display_data();
	return 0;
}
