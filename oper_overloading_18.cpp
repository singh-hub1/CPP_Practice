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
        cout<<"The value of a is :::"<<a<<endl;
        cout<<"The value of b is :::"<<b<<endl;
    }
friend ostream& operator<<(ostream&,Complex);
friend istream& operator>>(istream&,Complex&);
};

ostream& operator<<(ostream& dout,Complex c)
{
    cout<<c.a<<endl;
    cout<<c.b<<endl;
    return cout;
}

istream& operator>>(istream& din,Complex& c)
{
    din>>c.a;
    din>>c.b;
    return din;
}

int main()
{
    Complex c1;
    cout<<"Enter a complex number"<<endl;
    cin>>c1;
    cout<<"You entered"<<endl;
    cout<<c1;    //operator<<(cout,c1);
return 0;
}
