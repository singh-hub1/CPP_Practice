#include <iostream>

//RELATIONAL OPERATORS OVERLOADING
        //   >, <, <=, >=, ==, !=

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

    bool operator>(const Circle &c2)
    {
        return this->a > c2.a;
    }

    bool operator<(const Circle &c2)
    {
        return this->a < c2.a;
    }

    bool operator==(const Circle &c2)
    {
        return this->a == c2.a;
    }

    bool operator!=(const Circle &c2)
    {
        return this->a != c2.a;
    }

    bool operator>=(const Circle &c2)
    {
        return this->a >= c2.a;
    }

    bool operator<=(const Circle &c2)
    {
        return this->a <= c2.a;
    }
};

int main()
{
    Circle c1(5), c2(6);
    int n;
    cout<<"1.(>)"<<endl;
    cout<<"2.(>)"<<endl;
    cout<<"3.(>=)"<<endl;
    cout<<"4.(<=)"<<endl;
    cout<<"5.(==)"<<endl;
    cout<<"6.(!=)"<<endl;
    cout<<endl;
    cout << " :: Enter your choice for operator overloading :: " << endl;
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "Greater than operator(>)" << endl;
        if (c1 > c2) //c1.operator>(c2)
        {
            cout << "c1 is larger than c2" << endl;
        }
        else
        {
            cout << "c2 is larger than c1" << endl;
        }
        break;

    case 2:
        cout << "Less than operator(<)" << endl;
        if (c1 < c2) //c1.operator<(c2)
        {
            cout << "c1 is less than c2" << endl;
        }
        else
        {
            cout << "c2 is larger than c1" << endl;
        }
        break;

    case 3:
        cout << "Greater than equal to operator(>=)" << endl;
        if (c1 >= c2) //c1.operator>=(c2)
        {
            cout << "c1 is larger than c2 or equal to c2" << endl;
        }
        else
        {
            cout << "c1 is lesser than c2" << endl;
        }
        break;

    case 4:
        cout << "Less than Equal to operator(<=)" << endl;
        if (c1 <= c2) //c1.operator<=(c2)
        {
            cout << "c1 is lesser than c2 or equal to c2" << endl;
        }
        else
        {
            cout << "c2 is lesser than c1" << endl;
        }
        break;

    case 5:
        cout << "Equal to operator(==)" << endl;
        if (c1 == c2) //c1.operator==(c2)
        {
            cout << "c1 is equal to c2" << endl;
        }
        else
        {
            cout << "c1 is not equal to c2" << endl;
        }
        break;

    case 6:
        cout << "Not equal to operator(!=)" << endl;
        if (c1 != c2) //c1.operator!=(c2)
        {
            cout << "c1 is not equal to to c2" << endl;
        }
        else
        {
            cout << "c1 is equal to c2" << endl;
        }
        break;

    default:
        cout << "Wrong input" << endl;
        break;
    }

    return 0;
}
