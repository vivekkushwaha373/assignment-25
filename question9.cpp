#include<iostream>
using namespace std;
class square
{
int n;
public:
area(int a)
{
    cout<<"area of square: "<<a*a;
}

};
int main()
{
square s1;
s1.area(8);
    return 0;
}