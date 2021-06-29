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

    Circle(const Circle& rho)
    {
        cout<<"Copy constructor"<<endl;
        this->a=rho.a;
    }


};


int main()
{
    Circle c1(5);

    // Circle c2(c1);//copy constructor
    // Circle c2=c1;//copy constructor

Circle c2;
    c2=c1;//assignment operator
    c2.display();
    return 0;
}
