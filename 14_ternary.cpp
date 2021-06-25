#include<iostream>
using namespace std;
int main()
{
    
    // int first{};
    // int second{},result;
    // cout<<"Enter the first number"<<endl;
    // cin>>first;
    // cout<<"Enter the second number"<<endl;
    // cin>>second;
    // result=(first>second)?first:second;
    // cout<<result<<endl;
    int a,b,c,max;
    cout<<"enter the first number"<<endl;
    cin>>a;
    cout<<"enter the second number"<<endl;
    cin>>b;
    cout<<"enter the third number"<<endl;
    cin>>c;
    max=(a>b &&a>c)?a:(b>c?b:c);
    cout<<"max is:"<<max<<endl;
}