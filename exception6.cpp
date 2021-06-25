#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter the value of a  and b " << endl;
    cin >> a >> b;
    int x = (a - b);

    try
    {
        if (x != 0)
        {
            cout << "Result :: " << (a / (a - b)) << endl;
        }
        else
        {
            throw x;
        }
    }
    catch (int i)
    {
        cout << "Any number is divisible by Zero is not performed!!" << endl;
    }
    cout << "Next Statement" << endl;
    return 0;
}
