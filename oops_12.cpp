#include <iostream>
using namespace std;
class employee
{
private:
    int a;
    int b;
    int *p;

public:
    employee()
    {
        p = new int;
    }

    void set_data(int x, int y, int z)
    {

        a = x;
        b = y;
        *p = z;
    }

    employee(employee &e1)
    {
        a = e1.a;
        b = e1.b;
        p = new int;
        *p = *(e1.p);
    }
    void display()
    {
        cout << a << endl
             << b << endl
             << (*p) << endl;
    }

    ~employee()
    {
        cout << "object is detsroyed";
    }
};
int main()
{
    employee e1;
    e1.set_data(1, 5, 4);
    e1.display();

    employee e2 = e1;
    e2.display();

    return 0;
}
