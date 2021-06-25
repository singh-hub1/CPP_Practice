//String traversal using simple for loop and range for loop.

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str="vishal singh";

    // cout<<str.at(0)<<endl;
    // cout<<str.at(str.length()-1)<<endl;

    //--------------------------------------------------------------------------------------

    // cout<<str[0]<<endl;
    // cout<<str[str.length()-1]<<endl;

     //--------------------------------------------------------------------------------------

/*
     for (int i = 0; i < str.length(); i++)
     {
          cout<<str.at(i)<<endl;
         // cout<<str[i]<<endl;
         if(str[i]>='a' && str[i]<='z')
         {
             str[i]-=32;
         }
     }
     cout<<str;
    */

   for(char &p:str)
   {
    //    cout<<p<<",";
     if(p>='a' && p<='z')
     {
         p-=32;
     }

   } 
    cout<<str;
    return 0;
}
