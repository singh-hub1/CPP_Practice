#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "hello vishal singh welcome to your laptop";
    /*str.clear();
    if(str.empty())
    {
        cout<<"string is completely empty now!!!"<<endl;

    }
    else
    {
        cout<<"string is not empty!!!"<<endl;
    }
    */

    //------------------------------------------------------------------------------------------------------------------------------------------

    //    str.erase(6,6);
    //    cout<<str<<endl;//hello  singh welcome to your laptop

    //-------------------------------------------------------------------------------------------------------------------------------------------

    //    str.erase(str.begin()+6);
    //    cout<<str<<endl;//hello ishal singh welcome to your laptop

    //------------------------------------------------------------------------------------------------------------------------------------------------

    str.erase(str.begin() + 6, str.end() - 5);
    cout << str << endl; //hello aptop

    return 0;
}
