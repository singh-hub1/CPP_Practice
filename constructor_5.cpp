#include <iostream>
using namespace std;
class Dynamic
{
public:
    int *ptr;
    Dynamic()
    {
        ptr = new int;
        *ptr = 1000;
    }
    Dynamic(int v)
    {
        ptr = new int;
        *ptr = v;
    }
    int display()
    {
        return (*ptr);
    }
};

int main()
{
    Dynamic *ptr1, *ptr2; //Creation of dynamic object of class Dynamic

    ptr1 = new Dynamic;

    ptr2 = new Dynamic(500);

    cout << ptr1->display() << endl;

    cout << ptr2->display() << endl;

    return 0;
}
