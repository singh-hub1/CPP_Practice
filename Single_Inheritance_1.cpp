#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class Base
{
private:
    string emp_name;
    int emp_no;
    char sex;

public:
    void get();
    void set();
};


class Derived : public Base
{
private:
    float basic_sal;

public:
    void get();
    void set();
};

void Base ::get()
{
    cout << "Enter name :: " << endl;
    cin >> emp_name;
    cout << "Enter Employee id :: " << endl;
    cin >> emp_no;
    cout << "Enter sex :: " << endl;
    cin >> sex;
}

void Base ::set()
{
    cout << setw(6) << "Employee name :: " << emp_name << endl;
    cout << setw(6) << "Employee Id :: " << emp_no << endl;
    cout << setw(6) << "Employee Sex :: " << sex << endl;
}

void Derived ::get()
{
    Base ::get();
    cout << setw(6) << "Enter Basic Salary :: " << endl;
    cin >> basic_sal;
}

void Derived ::set()
{
    Base ::set();
    cout << "Employee Basic Salary is :: " << basic_sal;
}


int main()
{
    int n;

    cout << "Enter ho many Employee You want ?" << endl;
    cin >> n;

    Derived obj[10];

    for (int i = 0; i < n; i++)
    {
        obj[i].get();
        cout << endl;
    }

    
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        obj[i].set();
        cout << "------------------------------------------------------------" << endl;
    }

    return 0;
}
