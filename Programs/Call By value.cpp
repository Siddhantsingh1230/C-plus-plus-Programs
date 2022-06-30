#include <iostream>
using namespace std;
void swap(int x ,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	cout<<"a-"<<x<<endl<<"b-"<<y<<endl;
}
int main()
{
	int a=17,b=10;
	cout<<"\nDuring function call\n";
	swap(a,b);
	cout<<"\nAfter function call\n";
	cout<<"a-"<<a<<endl<<"b-"<<b<<endl;
	return 0;
}
