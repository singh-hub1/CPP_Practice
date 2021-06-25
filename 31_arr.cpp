#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    int n;
    cout << "enter how many number u want" << endl;
    cin >> n;
    while (n <= 0 || n > 100)
    {
        cout << " Invalid input " << endl;
        cout << "Input again" << endl;
        cin >> n;
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Input Value for index: " << i << ":" << endl;
        cin >> arr[i];
    }

    cout << "THE ARRAY VALUE ARE AS FOLLOWS" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << " Value for index : " << i << ":" << arr[i] << endl;
    }

    return 0;
}
