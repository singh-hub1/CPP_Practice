//HOW TO PASS ARRAY TO FUNCTION

#include <iostream>
using namespace std;

// void  printArray(int *p,int n)
// {
//     for (int i = 0; i < 5; i++)
//     {
//         //cout<<*(p+i)<<" "<<endl;
//         cout<<p[i]<<" "<<endl;
//     }
// }

void printArray(int p[], int n)
{
    for (int i = 0; i < 5; i++)
    {
        //cout<<*(p+i)<<" "<<endl;
        cout << p[i] << " " << endl;
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    printArray(arr, 5);
    return 0;
}
