#include<iostream>
using namespace std;

int main()
{
    int i=3;
    cout<<"welcome to exception handling notes!!!"<<endl;
    try
    {
        if(i==1)
            throw 1;
        if(i==2)
            throw 2;
        if(i==3)
            throw 3;
        
        cout<<"In Try block"<<endl;
    }
    catch(int e)
    {
        cout<<"Exception No :: "<<e<<endl;
    }
    cout<<"END OF EXCEPTION"<<endl;
return 0;
}

/*
welcome to exception handling notes!!!
Exception No :: 3
END OF EXCEPTION 

*/