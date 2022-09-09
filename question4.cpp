#include<iostream>
using namespace std;
class Largestnumber
{
int a,b,c;
public:
void setnum(int x,int y,int z)
{
a=x;
b=y;
c=z;
 
}
void result()
{   int s=a>b?a>c?a:c:b>c?b:c;
    cout<<"Greatest number is: "<<s;
}

};
int main()
{
Largestnumber s1;
s1.setnum(1000,200,3);
s1.result();

    return 0;
}