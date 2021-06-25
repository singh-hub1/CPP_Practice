#include <iostream>
using namespace std;

int main()
{
    int i = 3;
    cout << "welcome to exception handling notes!!!" << endl;
    try
    {
        if (i == 1)
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
In Try block
END OF EXCEPTION

*/
