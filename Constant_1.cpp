#include <iostream>
using namespace std;

class Test
{
private:
    int a, b, c;

public:
    Test()
    {
    }

    Test(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
    void display() const
    {
        cout << "Value of a is :: " << a << endl;
        cout << "Value of b is :: " << b << endl;
        cout << "Value of c is :: " << c << endl;
    }

    void Display()
    {
        cout << "Value of a is :: " << a << endl;
        cout << "Value of b is :: " << b << endl;
        cout << "Value of c is :: " << c << endl;
    }
};

int main()
{
    Test t1;
    Test t2(1, 5, 9);

    t2.display();

    cout << "--------------------------------------------" << endl;

    t2.Display();

    cout << "--------------------------------------------" << endl;

    const Test t3(4, 7, 8);

    t3.display();

    // t3.Display(); //ERROR

    return 0;
}

/*
A const member function can be called by any type of object wheather it is const or not.

A non-const member function can be called only by non-const object.

*/