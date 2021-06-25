#include <iostream>
using namespace std;
class B;
class A
{
private:
    int a;

public:
    void set_data(int x)
    {
        a = x;
    }
    void display()
    {
        cout << "The value of a is :: " << a << endl;
    }
    friend void sum(A, B);
};

class B
{
private:
    int b;

public:
    void set_data(int y)
    {
        b = y;
    }
    void display()
    {
        cout << "The value of  b is :: " << b << endl;
    }
    friend void sum(A, B);
};

void sum(A a1, B b1)
{
    cout << "The sum of a and b is :: " << a1.a + b1.b << endl;
}
int main()
{
    A a1;
    a1.set_data(5);
    a1.display();
    cout << "******************************************************" << endl;
    B b1;
    b1.set_data(10);
    b1.display();
    cout << "******************************************************" << endl;
sum(a1,b1);

    return 0;
}
