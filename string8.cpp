#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "hello vishal singh";

    str.push_back(',');
    cout << str << endl; //hello vishal singh,

    //------------------------------------------------

    str.pop_back();
    cout << str << endl; //hello vishal singh

    //------------------------------------------------

    str.front() = 'H';
    cout << str << endl; //Hello vishal singh

    //------------------------------------------------

    str.back() = 'Z';
    cout << str << endl; //Hello vishal singZ

    //------------------------------------------------

    str.append("do u love me ");
    cout << str << endl; //Hello vishal singZdo u love me

    //------------------------------------------------

    str.insert(6, "(inserted)");
    cout << str << endl; //Hello (inserted)vishal singZdo u love me
    return 0;
}
