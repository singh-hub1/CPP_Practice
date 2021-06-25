#include<iostream>
using namespace std;

void printArray(int (&p)[5])
{
    for(auto i : p)
  {
        cout << i << " " << endl;
   }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

//  for(int p : arr)
//  {
//        cout << p << " " << endl;
//  }

//  for(int &p : arr)
//  {
//       p*=2;
     
//  }

//  for(int i : arr)
//   {
//         cout << i << " " << endl;
//   }

//  for(auto i : arr)
//   {
//         cout << i << " " << endl;
//   }

printArray(arr);
    return 0;
}