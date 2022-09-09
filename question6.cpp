#include<iostream>
using namespace std;
class Square
{public:
    static int a;//static member variable //declaration and It has having bydefault value of 0;
public:
int Csquare(int x)
{

a++;
return x*x;

}

};
int Square::a=0;//
int main()
{
int sq=0;
int num;
Square s1;
cout<<"Enter the number: ";
cin>>num;
for(int i=1;i<=num;i++)
sq=sq+s1.Csquare(i);
cout<<"square of "<<num<<" is "<<sq<<endl;
cout<<"The number of times function called: "<<Square::a;
    return 0;
}