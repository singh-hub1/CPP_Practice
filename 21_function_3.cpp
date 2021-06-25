/*FUNCTION OVERLOADING IN CPP:=It will happen in compile time not in run time*/

#include<iostream>
using namespace std;

int sum(int,int);
double sum(double,double);

int sum(int a,int b)
{
    cout<<"integer sum"<<endl;
    return a+b;
}

double sum(double a,double b)
{
    cout<<"double sum"<<endl;
    return a+b;
}


int main()
{
    cout<<sum(3,7)<<endl;
    cout<<sum(3.4,7.5)<<endl;
  return 0;
}