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
    Dynamic d1;      //It will call dynamic constructor

    Dynamic d2(500); //It will call dynamic constructor

    cout << d1.display() << endl;

    cout << d2.display() << endl;
    
    return 0;
}
