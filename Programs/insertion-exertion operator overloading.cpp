#include <iostream>
using namespace std;

class Complex
{
private:
	int real, imag;
public:
	Complex()
	{ real = 0; imag = 0; }
	friend ostream & operator << (ostream &out, Complex &c);
	friend istream & operator >> (istream &in, Complex &c);
};

ostream & operator << (ostream &out,  Complex &c)
{
	out << c.real;
	out << "+i" << c.imag << endl;
	return out;
}

istream & operator >> (istream &in, Complex &c)
{
	cout << "Enter Real Part ";
	in >> c.real;
	cout << "Enter Imaginary Part ";
	in >> c.imag;
	return in;
}

int main()
{
 Complex c1;
 cin >> c1;
 cout << "The complex object is ";
 cout << c1;
 return 0;
}
