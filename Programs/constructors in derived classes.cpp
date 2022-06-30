//constructors in derived classes

#include <iostream>
using namespace std;

class alpha
{
private:
    int x;
public:
    alpha(int i)
    {
        x=i;
        cout<<"Alpha Constructor"<<endl;
    }
    void show_x()
    {
        cout<<"x= "<<x<<endl;
    }
};
class beta
{
private:
    float y;
public:
    beta(float j)
    {
        y=j;
        cout<<"Beta Constructor"<<endl;
    }
    void show_y()
    {
        cout<<"y= "<<y<<endl;
    }
};
class gamma:public beta,  public alpha
{
private:
    int m,n;
public:
    gamma(int a, float b, int c,int d):alpha(a),
        beta(b)
    {

        m=c;
        n=d;
        cout<<"Gamma Constructor"<<endl;
    }
    void show_mn()
    {
        cout<<"m= "<<m<<endl<<"n= "<<n<<endl;
    }
};

int main()
{

    class gamma g(1,2.5,3,4);
    g.show_x();
    g.show_y();
    g.show_mn();

    return 0;
}
