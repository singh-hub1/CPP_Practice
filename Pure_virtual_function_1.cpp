#include <iostream>
using namespace std;
class Person
{
public:
    virtual void fun() = 0; //This is pure virtual function.
    void f1()
    {
        cout << "Inside Person class" << endl;
    }
};
//This Person class is now called as ABSTRACT CLASS in C++.

class Student : public Person
{
public:
    void fun()
    {
        cout << "Inside Student class" << endl;
    }
};
int main()
{

    return 0;
}
