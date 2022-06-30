//unirary operator overloading

#include<iostream>

using namespace std;

class ops
{
private:
    int x,y,z;
public:
    ops()
    {
    	x=0,y=0,z=0;
    }
    void get_data()
	{
    	cout<<"Enter Numbers:"<<endl;
    	cin>>x>>y>>z;   
    }
    void display_data()
    {
    	cout<<x<<" "<<y<<" "<<z<<endl;
    }
    void  operator -();
};
void ops:: operator-()
{
	x=-x;
	y=-y;
	z=-z;
}
int main()
{
	ops obj;
	obj.get_data();
	-obj;
	obj.display_data();
	return 0;
}
