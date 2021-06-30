#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class Addition
{
private:
    int a, b;

public:
    void display()
    {
        cout << setw(5) << "Value of a is ::" << a << endl;
        cout << setw(5) << "Value of b is ::" << b << endl;
    }

    Addition(); //Constructor declaration;

    Addition(int, int); //Constructor declaration;
};

Addition ::Addition(int a, int b)
{
    this->a = a;
    this->b = b;
}

Addition::Addition()
{
}

int main()
{
    Addition a1;
    a1 = Addition(10, 20); //Explicit call of constructor
    a1.display();

    return 0;
}
