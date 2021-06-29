#include <iostream>
#include <iomanip>
using namespace std;

void display(int *q, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << setw(4) << *(q + i);
    }
    cout << endl;
}

int main()
{
    int x[100]; //Compile time allocation

    int *p = new int[100]; //Run time allocation

    delete[] p; //It is deallocate memory of the array block entirely.

    int *ptr = new int(10); //It will create one dynamic memory block of type int with value 10 in it.

    delete ptr; //It will deallocate only single memory block pointer which holds the address of new memory block.

    int n;

    cout << "Input how many integer elements you want" << endl;
    cin >> n;

    int *q{new int[n]};  //This is uniform initialization method.

    for (int i = 0; i < n; i++)
    {
        cout << "Next int :: " << endl;
        cin >> *(q + i);
    }

    display(q, n);

    return 0;
}
