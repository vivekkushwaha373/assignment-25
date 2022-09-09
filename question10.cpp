#include<iostream>
#define pi 3.14
using namespace std;
class Area
{   public:
    square(int a)
    {
    cout<<"area of Square is: "<<a*a<<endl;
    }
    rectangle(int a,int b)
    {
    cout<<"area of rectangle is: "<<a*b<<endl;
    }
    circle(int a)
    {
    cout<<"area of circle is: "<<pi*a*a<<endl;
    }
};
int main()
{
    Area s1;
    s1.square(2);
    s1.rectangle(4,8);
    s1.circle(5);

    return 0;
}