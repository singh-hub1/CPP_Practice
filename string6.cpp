//STRING ITERATOR

#include <iostream>
#include <string>
using namespace std;

main()
{
    string str = "vishal singh";
    string ::iterator it = str.begin();
    // string ::iterator it=str.end();

    while (it != str.end())
    {
        // cout<<*it<<endl;
        if (*it >= 'a' && *it <= 'z')
        {
            *it -= 32;
        }
        ++it;
    }
    cout << str << " ";

    cout << endl
         << endl;

    //---------------------------------------------------------------------------------------------------------------------------------------

    string ::reverse_iterator rit = str.rbegin();

    while (rit != str.rend())
    {
        cout << *rit << " ";
        ++rit;
    }

    return 0;
}
