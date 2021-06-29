#include <iostream>

using namespace std;

class Circle
{
private:
    int radius;

public:
    Circle()
    {}

    Circle(int radius)
    {
        this->radius = radius;
    }

    void display()
    {
        cout << "Value of Radius is :: " << radius << endl;
    }

  friend  Circle operator-(const Circle &c1,const Circle &c2);
   
};


 Circle  operator-(const Circle &c1,const Circle &c2)
    {
        Circle result;
        result.radius = abs(c1.radius - c2.radius);
        return result;
    }

int main()
{
    Circle c1(15), c2(12), c3;

    c3 = c1 - c2;

    cout << "--------------------" << endl;

    c3.display();

    return 0;
}
