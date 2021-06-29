#include <iostream>

using namespace std;

class Circle
{
private:
    int a;

public:
    Circle()
    {
    }

    Circle(int a)
    {
        this->a = a;
    }

    void display()
    {
        cout << "Value of a is :: " << a << endl;
    }

    Circle &operator=(const Circle &c2);
};

Circle &Circle ::operator=(const Circle &c2)
{
    this->a = c2.a;
    return *this;
}

int main()
{
    Circle c1(5), c2(6), c3;

    c3 = c1 = c2; //this will evaluates from right to left sequence
    c3.display();
    return 0;
}
