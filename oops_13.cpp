//OPERATOR OVELOADING(+)
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

    // complex add(complex c1)
    // {
    //     complex temp;
    //     temp.a=a+c1.a;
    //     temp.b=b+c1.b;
    //     return temp;
    // }

    complex operator+(complex c1)
    {
        complex temp;
        temp.a = a + c1.a;
        temp.b = b + c1.b;
        return temp;
    }
};

int main()
{
    complex c1(4, 7), c2(8, 2), c3(0, 0);
    c1.display();
    c2.display();
    // c3=c1.add(c2);

    c3 = c1 + c2;
   //c3=c1.operator+(c2);
    c3.display();
    return 0;
}