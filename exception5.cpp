#include <iostream>
using namespace std;
void fun()
{
    throw 10;
}
int main()
{
    int i = 3;
    cout << "welcome to exception handling notes!!!" << endl;
    try
    {
        if (i == 3)
            fun();
        cout << "In Try block" << endl;
    }
    
    catch (int x)
    {
        cout << "Exception No :: " <<x<<endl;
    }
    cout << "END OF EXCEPTION" << endl;
    return 0;
}


/*
welcome to exception handling notes!!!
Exception No :: 10
END OF EXCEPTION
*/
