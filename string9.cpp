#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "vishal singh is good boy.And that boy is very badmash type of boy in our school";

    string target = "boy";
    // string target("boy");

    string::size_type index = str.find(target);

    while (index != string::npos)

    {
        cout << "Target string " << (target) << " is found at index at :: " << index << endl;

        index = str.find(target, index + 1);
    }

    return 0;
}
