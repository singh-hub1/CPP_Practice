#include <iostream>
using namespace std;

int main()
{
    int n;
    
    cout << "Input number of elements" << endl;

    cin >> n;

    int *p;

    p = new int[n];

    cout << "hello world" << endl;

    delete[] p;

    return 0;
}

/*

//THIS WILL GIVE YOU ERROR,TO HANDLE THIS TYPE OF ERROR AT RUN-TIME THEN YOU WILL USE EXCEPTION HANDLING CONCEPT.

Input number of elements
10000000000000
terminate called after throwing an instance of 'std::bad_array_new_length'
  what():  std::bad_array_new_length

*/