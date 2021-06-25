//replace method of string - useful when you need to replace a portion of string

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "first is the first word we like first always!!";
    string target("first");
    string repl("second");

    string::size_type index = str.find(target);

    while (index != string::npos)
    {
        str.replace(index, target.length(), repl);
        index = str.find(target, index + repl.length());
    }
    cout << str << endl;
    return 0;
}
