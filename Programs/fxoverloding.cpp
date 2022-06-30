#include<iostream>

using namespace std;

void add (int a ,int b)
{
	int c;
	c=a+b;
    cout<< c;
}
void add (int a ,int b,int d)
{
	float c;
	c=a+b+d;
	cout<< c;
    
}
void add (double a ,double b)
{
	double c;
	c=a+b;
	cout<< c;
    
}
void add (float a ,float b)
{
	float c;
	c=a+b;
	cout<<"Hi" <<c;
    
}
int main()
{
	cout<<"Int add="<<endl;
	add(int(10),int(15));
	cout<<"\n3 value int add="<<endl;
	add(10,15,1);
	cout<<"\nDouble add="<<endl;
	add(10.1,15.1);
	cout<<"\nFloat add="<<endl;
	add((float)10.10001,(float)15.1001);
	return 0;
}
