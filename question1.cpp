#include<iostream>
using namespace std;
class Complex
{
  int real;
  int imaginary;
  public:
  void setreal(int,int);
  void printfvalue()
  {
    cout<<"Real is "<<real<<" and imaginery is "<<imaginary;
  }
};
void Complex::setreal(int a,int b)
{
  real=a;
  imaginary=b;
}
int main()
{
    Complex s1;
    s1.setreal(2,4);
    s1.printfvalue();
    return 0;
}