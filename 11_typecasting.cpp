#include<iostream>
using namespace std;
int main()
{
    int a{10};
    int b{20};
    double d;
    // d=(double)a/b;
     d=a/(double)b;
    cout<<"result is: "<<d<<endl;
    return 0;
}