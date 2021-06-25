#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string name = "vishal singh";
    int age = 20;
    ostringstream oss;
    oss << name << " : " << age << " Thanku!! ";
    string str = oss.str();
    cout << str << endl;
    return 0;
}
