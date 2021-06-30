#include <iostream>
using namespace std;

class employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setdata(int a1, int b1, int c1); //function declaration here only

    employee()
    {
    }

    void display()
    {
        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
        cout << d << endl;
        cout << e << endl;
    }
};

void employee::setdata(int a1, int b1, int c1) //function defination
{
    this->a = a1;
    this->b = b1;
    this->c = c1;
}

int main()
{
    employee e1;
    e1.d = 10;
    e1.e = 100;
    //Because d and e are public variable inside the class

    e1.setdata(1, 2, 3);
    e1.display();
}