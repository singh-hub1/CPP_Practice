//ADDITION OF TWO COMPLEX NUMBERS
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
    complex sum(complex c2)
    {
       complex temp;
       temp.a=a+c2.a;
       temp.b=b+c2.b;
       return temp;
    }
    void display()
    {
        
      cout<<a<<"i"<<"+"<<b<<endl;
    }
};
int main()
{
    complex c1,c2,c3;
    c1.set_data(2,3);
    c2.set_data(8,2);
    c3=c1.sum(c2);
    c3.display();
return 0;
}
