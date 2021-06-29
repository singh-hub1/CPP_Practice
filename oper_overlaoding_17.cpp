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
Complex operator+()
{
    Complex temp;
    temp.a=+(this->a);
    temp.b=+(this->b);
    return temp;
}

};

int main()
{
    Complex c1(-7,4),c2;
    c2=+c1;
    c2.display();

return 0;
}
