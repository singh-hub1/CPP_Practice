#include<iostream>
using namespace std;
class sum
{
    private:
    int a,b;
    public:
     sum(int x,int y)
     {
       a=x;
       b=y;  
     }

     sum (int z)
     {
         a=z;
         cout<<a<<endl;
     }

     void add()
     {
         if(a>b)
             cout<<"a is greater than b"<<endl;
         else
             cout<<"b is greater than a"<<endl;
         
     }
     sum(sum &c)//this is copy constructor
     {
         a=c.a;
         b=c.b;
         cout<<a<<endl<<b<<endl;
     }
};
int main()
{
    sum s1(5,6);

    sum s2(11,9);

    sum s3(10);
    sum s4(s2);//this is copy constructor

    s1.add();

    s2.add();

return 0;
}
