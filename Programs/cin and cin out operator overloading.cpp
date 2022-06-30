#include <iostream>

using namespace std;

class complex
{
	private :
	int real, imag;
	public:
	complex()
	{
		real=0;
		imag=0;
	}
	friend ostream & operator<<(ostream &a,complex &c);
	friend istream & operator>>(istream &b, complex &c);
};
ostream & operator <<(ostream &a , complex &c)
{
	a<<c.real;
	a<<"+i"<<c.imag<<endl;
	return a;
}
istream & operator >>(istream &b ,complex &c)
{
	cout <<"Enter Real";
	b>>c.real;
	cout<<"Enter Imaginary";
	b>>c.imag;
	return b;
}
int main()
{
	complex c1;
	cin>>c1;
	cout<<c1;
	return 0;
}
