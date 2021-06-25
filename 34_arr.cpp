//REVERSE OF AN ARRAY ELEMENTS.

#include <iostream>
using namespace std;



void reverseArray(int p[], int n)
{
    for (int i = n-1; i >= 0; i--)
    {
        //cout<<*(p+i)<<" "<<endl;
        cout << p[i] << " " << endl;
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    reverseArray(arr, 5);
    return 0;
}
