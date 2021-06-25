#include<iostream>
using namespace std;

class employee
{
    private:
    int a,b,c;
    public:
    int d,e;
    void setdata(int a1,int b1,int c1);//function declaration here only
    void display()
    {
        
         cout<<a<<endl;
         cout<<b<<endl;
         cout<<c<<endl;
         cout<<d<<endl;
         cout<<e<<endl;      
    }
};

void employee::setdata(int a1,int b1, int c1)//function defination 
{
    a=a1;
    b=b1;
    c=c1;
}

int main()
{
    employee e1;
    e1.d=10;
    e1.e=100;
    e1.setdata(1,2,3);
    e1.display();
}