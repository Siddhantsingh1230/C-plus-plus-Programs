#include<iostream>

using namespace std;

class ops
{
private:
    float a;
public:
    void get_data();
    void display_data();
    ops operator + (ops x);
};
void ops:: get_data()
{
    cout<<"Enter Number:"<<endl;
    cin>>a;   
}
void ops::display_data()
{
    cout<<"Value:"<<a;
}
ops ops :: operator + (ops x)
{
    ops temp;
    temp.a= x.a + a;
    return temp;
}

int main()
{
    ops t1;
    ops t2; 
    ops t3;
    t1.get_data();
    t2.get_data();
    cout<<"Addition\n";
    t3=t1+t2;
    t3.display_data();
    
    return 0;
    
}
