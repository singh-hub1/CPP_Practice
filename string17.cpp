#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    string str {"Testing string in C++"};
    int p = str.find('t');
    int q = str.find('t', p+1);
    cout << "p = " << p << ", q = " << q << endl;
    return 0;
}