#include<iostream>
using namespace std;

struct Time
{
int hour;
int min;
int sec;

public:
void setdata(int h,int m,int s)
{
    hour=h;
    min=m;
    sec=s;
}
void display();
};
void Time::display()
{
    cout<<hour<<" hr "<<min<<" min "<<sec<<" sec";
}
int main()
{
   Time s1;
   s1.setdata(3,45,20);
s1.display();
    return 0;
}