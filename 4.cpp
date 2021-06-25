// convert fahren to celsius convert//
#include <iostream>
using namespace std;
int main()
{
    int ftemp;
    cout << "Enter temp in fahrenheit: ";
    cin >> ftemp;
    int ctemp = (ftemp - 32) * 5 / 9;
    cout << "Equivalent in celsius is:" << ctemp << '\n';
    return 0;
}