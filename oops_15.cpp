//OPERATOR OVELOADING(pre increment or post increment)
#include <iostream>
using namespace std;
class complex
{
    int a;

public:
    complex(int x)
    {
        a = x;
    }

    complex()
    {
    }

    void display()
    {
        cout << "a :: " << a << endl;
    }

    complex operator++(int) //post increment
    {
        complex temp;
        temp.a = a++;

        return temp;
    }

    complex operator++() //pre increment
    {
        complex temp;
        temp.a = ++a;

        return temp;
    }
};

int main()
{
    complex c1(4), c2(0);
    c1.display();

    cout << "***********************************" << endl;
    c2 = c1++; //c2=c1.operator++();
    c2.display();

    cout << "***********************************" << endl;
    c2 = ++c1; //c2=c1.operator++()
    c2.display();

    return 0;
}