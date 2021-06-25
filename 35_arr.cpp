//Passing array by reference to a function.

#include<iostream>
using namespace std;

const int array_size = 5;
    
void printArray(int (&p)[array_size])
{
    for (int i = 0; i < array_size; i++)
    {
       
        cout << p[i] << " " << endl;
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    printArray(arr);
    return 0;

    return 0;
}
