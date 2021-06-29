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

     double getArea() const
     {
         return 3.14159 * radius * radius;
     }

    void display()
    {
        cout << "Radius: " << radius
             << ", Area: " << getArea() << endl;
    }

    Circle operator+(const Circle& c2)
    {
        Circle temp;
        temp.radius = this->radius + c2.radius;
        return temp;
    }

};


int main()
{
    Circle c1(5), c2(6), c3;

    cout<<"--------This is for object c1---------"<<endl;

    c1.display();

    cout<<"--------This is for object c2---------"<<endl;

    c2.display();

    cout<<"--------This is for object c3---------"<<endl;

    c3 = c1 + c2; //c1.operator+(c2)

    c3.display();
    
    return 0;
}
