#include <iostream>
using namespace std;

int main()
{
    int i = 3;
    cout << "welcome to exception handling notes!!!" << endl;
    try
    {
        if (i == 1)
            throw 1;
        if (i == 3)
            throw "HEY THERE!!!";
        if (i == 3)
            throw 3.4;

        cout << "In Try block" << endl;
    }

    catch (...)
    {
        cout << "Exception No :: " << endl;
    }
    cout << "END OF EXCEPTION" << endl;
    return 0;
}

/*
welcome to exception handling notes!!!
Exception No :: 
END OF EXCEPTION

*/
