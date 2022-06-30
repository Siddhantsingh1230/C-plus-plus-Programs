// Class to Basic type Conversion can be achieved using casting operator Fx

#include <iostream>

using namespace std;

class Time
{
	private:
	int hours;
	int mins;
	public:
	operator int();
	void get_Time();
	void display_Time();
	
};
Time::operator int()
{
	int temp_time;
	temp_time=(hours*60)+mins;
	return temp_time;
}
void Time:: get_Time()
{
	cout<<"Enter Hours:";
	cin>>hours;
	cout<<"Enter Minutes:";
	cin>>mins;
}
void Time:: display_Time()
{
	cout<<hours<<" hours:"<<mins<<" minutes";
}
int main()
{
	Time t;
	t.get_Time();
	t.display_Time();
	int minutes;
	minutes=t;
	cout<<endl;
	cout<<minutes;
}
