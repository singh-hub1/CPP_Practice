#include <iostream>
using namespace std;
class A
{
public:
  virtual void f1()  //This function is now as late Binding at Run time.
    {
    }
};
class B
{
public:
    void f1()
    {
    }
    void f2()
    {
    }
};
int main()
{
    A *ptr, obj1;

    B obj2;

    // ptr = &obj1;

    // ptr = &obj2; //This is also correct

    obj2.f1();   //Early Binding   //Class B
    //Object type

    ptr->f1();   //Early Binding   //Class A
    //Pointer type

    ptr->f1();   //Late Binding   //Class B
    //Here Class B f1() is executes because of we use virtual keyword before function name f1() .So that y it is doing late binding now.

    return 0;
}
