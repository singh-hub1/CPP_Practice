//EXIT CONTROLLED LOOP
#include <iostream>
using namespace std;
int main()
{
    int sum{0};
    int nos;
    char response;
    do
    {
        cout << "Enter a number\n"
             << endl;
        cin >> nos;
        sum += nos;
        cout << "Want to continue?Y/y to continue" << endl;
        cin >> response;

    } while (response == 'Y' || response == 'y');

    cout << "sum is " << sum << endl;
    return 0;
}
