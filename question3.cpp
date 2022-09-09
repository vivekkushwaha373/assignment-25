#include<iostream>
using namespace std;
class Factorial
{
    public:
    int findfactorial(int a)
    {int s=1;
        for(int i=1;i<=a;i++)
        {
          s=s*i;
        }
    return s;
    }
};
int main()
{
Factorial s1;
int s;
s=s1.findfactorial(2);
cout<<s;
    return 0;
}