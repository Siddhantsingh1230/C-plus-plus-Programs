// Basic to Class type conversion|Use parameterised constructor of the same class to achieve it.
 
#include <iostream>

using namespace std;

class Time
{
	private:
	int hours;
	int mins;
	public:
	Time()
	{
		hours=0;
		mins=0;
	}
	Time(int x)
	{
		hours=x/60;
		mins=x%60;
	}
	void display_data()
	{
		cout<<endl;
		cout<<hours<<" Hour:"<<mins<<" minutes";
	}
};
int main()
{
	Time t;
	int minutes;
	cout<<"Enter Minutes:";
	cin>>minutes;
	t=minutes;
	t.display_data();
}
