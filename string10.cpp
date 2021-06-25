#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str("hello vishal! Welcome,to my cpp notes.Good luck!!");
    string target("+. !,");
    /*
    string::size_type index=str.find_first_of(target);

   

    while(index!=string::npos)
    {
        // cout<<"Found '"<<str[index]<<"' at: "<<index <<endl;
        str[index]='#';
        //hello#vishal##Welcome#to#my#cpp#notes#Good#luck##
        index=str.find_first_of(target,index+1);
    }
    cout<<str<<endl;
*/

    /*
    string::size_type index = str.find_first_not_of(target);

    while (index != string::npos)
    {
        // cout<<"Found '"<<str[index]<<"' at: "<<index <<endl;
        str[index] = '#';
        //##### ######! #######,## ## ### #####.#### ####!!
        index = str.find_first_not_of(target, index + 1);
    }
    cout << str << endl;
*/

    /*
    string::size_type index = str.find_last_of(target);

//similar as find_first_of but it search from end from the string
    while (index != string::npos)
    {
        // cout<<"Found '"<<str[index]<<"' at: "<<index <<endl;
        str[index] = '#';
      //hello#vishal##Welcome#to#my#cpp#notes#Good#luck##
        index = str.find_last_of(target, index + 1);
    }
    cout << str << endl;
*/

    string::size_type index = str.find_last_not_of(target);
    //similar as find_first_not_of but it search from end from the string
    while (index != string::npos)
    {
        // cout<<"Found '"<<str[index]<<"' at: "<<index <<endl;
        str[index] = '#';
        //hello#vishal##Welcome#to#my#cpp#notes#Good#luck##
        index = str.find_last_not_of(target, index + 1);
    }
    cout << str << endl;

    return 0;
}
