#include<iostream>
using namespace std;
class ReverseNum
{
int a;
public:
void reverse(int x)
{int reverse=0;
while(x!=0)
{
reverse=reverse*10+x%10;
x=x/10;

}
a=reverse;

}
void result()
{  
    cout<<"Reverse is: "<<a;
}

};
int main()
{
int num;
cout<<"Enter a number: ";
cin>>num;
ReverseNum s1;
s1.reverse(num);
s1.result();

    return 0;
}