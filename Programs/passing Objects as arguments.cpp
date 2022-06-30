#include<iostream>
using namespace std;
class time
{
int hours;
int minutes;
public:
void gettime(int h, int m)
{
hours=h; 
minutes=m;
}
void puttime(void)
{
cout<<hours<<" hours and";
cout<<minutes<<"minutes"<<"\n";
}
void sum(time, time); //declaration with objects as arguments
};
void time::sum(time t1, time t2) //t1,t2 are objects
{
minutes = t1.minutes + t2.minutes;
hours = minutes/60;
minutes = minutes % 60;
hours =hours + t1.hours + t2.hours;
}
int main()
{
class time t1;
class time t2;
class time t3;
t1.gettime(2,45); //get t1
t2.gettime(3,30); //get t2
t3.sum(t1,t2); //t3 = t1 + t2
cout<<"t1 = "; t1.puttime(); //display t1
cout<<"t2 = "; t2.puttime(); //display t2
cout<<"t3 = "; t3.puttime(); //display t3
return 0;
}	
