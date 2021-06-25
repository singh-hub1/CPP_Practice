#include <iostream>
using namespace std;

int main()
{
    int i = 3;
    cout << "welcome to exception handling notes!!!" << endl;
    try
    {
        if (i == 3)
            throw ;
        cout << "In Try block" << endl;
    }
    
    catch (int)
    {
        cout << "Exception No :: " << endl;
    }
    cout << "END OF EXCEPTION" << endl;
    return 0;
}


/*
welcome to exception handling notes!!!      
terminate called without an active exception
*/
