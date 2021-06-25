//BINARY OPERATOR OVERLOADING IN FRIEND FUNCTION//
#include<iostream>
using namespace std;
class complex
{
    private:
    int a,b;
    public:
    void set_data(int x,int y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<a<<" + "<<b<<"i"<<endl;
    }
    friend complex operator+(complex,complex);
};
complex operator+(complex x1,complex x2)
{
    complex temp;
    temp.a=x1.a+x2.a;
    temp.b=x1.b+x2.b;
    return temp;
}
int main()
{
    complex c1;
    c1.set_data(5,10);
    c1.display();
    cout<<"***************************************"<<endl;
    complex c2;
    c2.set_data(7,3);
    c2.display();
    cout<<"*************************************"<<endl;
    complex c3;
    c3=c1+c2;
    c3.display();
return 0;
}
