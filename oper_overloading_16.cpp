#include<iostream>
using namespace std;
class Complex 
{
private:
int a,b;
public:
Complex()
{}
Complex(int a,int b)
{
    this->a=a;
    this->b=b;

}
void display()
{
    cout<<"Value of a is ::"<<a<<endl;
    cout<<"Value of b is ::"<<b<<endl;

}
friend Complex operator-(const Complex& c1);


};

Complex  operator-(const Complex& c1)
{
    Complex temp;
    temp.a=-(c1.a);
    temp.b=-(c1.b);
    return temp;
}

int main()
{
    Complex c1(7,4),c2;
    c2=-c1;
    c2.display();

return 0;
}
