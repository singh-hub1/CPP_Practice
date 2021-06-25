#include <iostream>
using namespace std;

int main()
{
    //int x[]={1,2,3};
    //INITIAALIZATION INTO AN ARRAY
    //int y[3]={10,20,30};

    //Relationship between 1D array and pointers

    //Name of the array is pointer to hold the base address of ver first element.

    // arr[i] === *(arr+i)
    // *(arr+i)             ->It will print the content of that address
    // (arr+i) === &arr[i]  ->It will print the address of that.

    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        //cout<<arr[i]<<" "<<endl;
        //cout<<*(arr+i)<<" "<<endl;
        cout << i[arr] << " " << endl;

        //Above 3 lines are same ..all of them are print content of the array elements
    }

    //arr[i] internally converted into like *(arr+i)
    //i[arr] internally converted into like *(i+arr)

    return 0;
}
