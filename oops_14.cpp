//OPERATOR OVELOADING(-::unary operator)
#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    ~complex()
    {
        cout << "object is destroyed!!" << endl;
    }
    complex()
    {
    }

    void display()
    {
        cout << "a :: " << a << endl;
        cout << "b ::" << b << endl;
    }

    complex operator-()
    {
        complex temp;
        temp.a = -a;
        temp.b = -b;
        return temp;
    }
};

int main()
{
    complex c1(4, 7), c2(0, 0);
    c1.display();
    // c2=-c1;
    c2 = c1.operator-();
    c2.display();
    return 0;
}