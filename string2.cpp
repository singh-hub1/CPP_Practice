#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str1="vishal singh";

    cout<<str1<<endl;
    cout<<str1.length()<<endl; 

//----------------------------------------------------------------------------

    str1="arya singh";   //modify of str1 

    cout<<str1<<endl;
    cout<<str1.length()<<endl; 

//----------------------------------------------------------------------------------

      //string str2 ("justin singh");  //constrictor method..it will just call only once when its object of a class is created

      string str2(str1);   //here we pass as another string i.e this is copy constructor is called
      cout<<str2<<endl;
      cout<<str2.length()<<endl; 

//-------------------------------------------------------------------------------------------

      string str3(15,'$');    //this will call a constructor and create '$' this symbol 15 times.
      cout<<str3<<endl;   

    return 0;
}
