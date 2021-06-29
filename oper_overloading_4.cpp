#include <iostream>

using namespace std;

class Circle
{
private:
    int a;
    int b;

public:
    Circle()
    {
    }

    Circle(int a, int b)
    {
        this->a = a;
        this->b = b;
    }

    void display()
    {
        cout << "Value of a is :: " << a
             << ", Value of b is :: " << b << endl;
    }

    /*
    Circle operator+(const Circle& c2)
    {
        Circle temp;
        temp.a = this->a + c2.a;
        temp.b = this->b + c2.b;
        return temp;
    }
    */
   
    Circle operator+(const Circle &c2);
};

Circle Circle ::operator+(const Circle &c2)
{
    Circle temp;
    temp.a = this->a + c2.a;
    temp.b = this->b + c2.b;
    return temp;
}

int main()
{
    Circle c1(5, 2), c2(6, 5), c3;

    c3 = c1 + c2; //c1.operator+(c2)
    c3.display();
    return 0;
}
