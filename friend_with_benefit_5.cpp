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
        cout << "a = " << a << endl;
    }
    friend void fun(A, B);
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
        cout << "b = " << b << endl;
    }
    friend void fun(A, B);
};
void fun(A o1, B o2)
{
    cout << "The sum of a and b is :: " << o1.a + o2.b << endl;
}
int main()
{
    A o1;
    o1.set_data(6);
    o1.display();
    cout << "*********************" << endl;
    B o2;
    o2.set_data(4);
    o2.display();
    cout << "********************" << endl;
    fun(o1, o2);
    return 0;
}
