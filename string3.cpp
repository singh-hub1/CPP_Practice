// How to input string from keyboard using cin and getline

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name;
    cout<<"enter your name?"<<endl;

    //cin>>name;//it will take only first half of the name after the space it will ignore in case of cin object 

    getline(cin,name); //getline method is read space also its parameter like first is take object from where u want to read and second is string refernce name


    cout<<"WELCOME " <<name<<" "<<endl;

//-------------------------------------------------------------------------------------------

   
    return 0;
}
