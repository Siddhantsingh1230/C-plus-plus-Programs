#include<iostream>
using namespace std;
class rectangle
{
int length, width;
public:
rectangle() // Default constructor
{
length=0;
width=0;
}
rectangle(int _length, int _width) // Parameterized constructor
{
length = _length;
width = _width;
}
rectangle(rectangle &r) // Copy constructor
{
length = r.length;
width = r.width; 
}
void show()
{
	cout<<"length"<<length<<"\nwidth"<<width<<endl;
}
};
int main()
{
rectangle r1; // Invokes default constructor
	r1.show();
rectangle r2(10,10); // Invokes parameterized constructor
	r2.show();
rectangle r3(r2); // Invokes copy constructor
	r3.show();
	
}
