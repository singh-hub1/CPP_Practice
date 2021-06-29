//POST INCREMENT OPERATOR OVERLOADING WITH SIMPLE FUNCTION

#include <iostream>
using namespace std;
class Complex
{
private:
    int a;

public:
    Complex()
    {}

    Complex(int a)
    {
        this->a = a;
    }

    void display()
    {
        cout << "Value of a is ::" << a << endl;
    }

    Complex operator++(int)
    {
        Complex temp;
        temp.a = a++;
        return temp;
    }

};

int main()
{
    Complex c1(8), c2;

    c2 = c1++;

    cout << "----------The c2 object--------------" << endl;

    c2.display();  //8

    cout << "----------The c1 object--------------" << endl;

    c1.display();  //9

    return 0;
}
