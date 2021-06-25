#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    /*
    string s = "10,20,30,40,50";
    istringstream iss(s);
    int k;
    while (iss >> k)
    {
        cout << k << endl;
        if (iss.peek() == ',')
        {
            iss.ignore();
        }
    }
    */
   string source="vishal:20,arya:3,swati:32";
   istringstream iss(source);
   string part;
   while(getline(iss,part,','))
   {
       cout<<part<<endl;

   }
    return 0;
}
