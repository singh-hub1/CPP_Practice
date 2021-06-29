#include <iostream>
#include <iomanip>
using namespace std;

int* display(int *q, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << setw(4) << *(q + i);
    }
    cout << endl;

    return q;
}

int main()
{
   
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

    delete[]q;//This will delete th emeory from the heap section.

    return 0;
}
