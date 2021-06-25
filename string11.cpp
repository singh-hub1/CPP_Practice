#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1 = "cat";
    string str2 = "tiger";

    int p=str1.compare(str2);
    cout<<"Content of p is :: "<<p<<endl;

/*
if(str1<str2)
{
    cout<<" '"<<str1<<"' Comes first in dictionary"<<endl;
}
else
{
     cout<<" '"<<str2<<"' Comes first in dictionary"<<endl;
}
*/

    return 0;
}
