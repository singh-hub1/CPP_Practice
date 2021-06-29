//OPERATOR OVELOADING(+)
#include <iostream>

using namespace std;

class complex
{

private:
    int a;

public:
    complex(int x)
    {
        this->a = x;
    }

    complex()
    {
    }

    void display()
    {
        cout << "a :: " << a << endl;
    }

    friend complex operator+(complex c1, complex c2); //friend function is must be declaration inside the class.
};

complex operator+(complex c1, complex c2)
{
    complex temp;
    temp.a = c1.a + c2.a;
    return temp;
}

int main()
{
    complex c1(4), c2(8), c3;

    c3 = c1 + c2;

    cout << "----------------------THE OUTPUT IS ::------------" << endl;

    c3.display();
    
    return 0;
}