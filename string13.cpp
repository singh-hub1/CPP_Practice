#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1 = "vishal singh";
    string part = str1.substr(0, 6);
    cout << "The substring of '" << str1 << "' is :: " << part << endl;
    return 0;
}
