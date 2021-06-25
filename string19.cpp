#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{

    ostringstream oss;
    for (int k = 1; k <= 5; ++k)
    {
        oss << k << "-";
    }
    string str = oss.str();
    cout << str.substr(0, str.size() - 1); //1-2-3-4-5
}
