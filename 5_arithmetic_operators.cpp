#include<iostream>
using namespace std;
int main()
{
    int a{12};
    int b{20};
    int c;
    c=a+b;
    cout<<"the sum is: "<<c<<endl;
    c=a-b;
    cout<<"the subtraction is: "<<c<<endl;
     c=a*b;
    cout<<"the multiplication is: "<<c<<endl;
    c=a/b;
    cout<<"the division is: "<<c<<endl;
    c=a%b;
    cout<<"the modulus is: "<<c<<endl;
    return 0;
}