#include <iostream>
using namespace std;

int main()
{
    int n;
    bool error = false;
    int *p;

    do
    {

        error = false;

        cout << "Input number of elements" << endl;

        cin >> n;

        try
        {
            p = new int[n];
        }

        catch (std::bad_array_new_length exc)
        {
            cout <<"NEW keyword is failed to allocate memory because : "<< exc.what() << endl;

            cout<<"Please input the value for n again!"<<endl;

            error = true;
        }

      

     } while(error);

       cout << "hello world" << endl;

 delete[] p;

 return 0;

}

/*

Input number of elements
100000000000000
std::bad_array_new_length
hello world

*/