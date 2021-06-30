#include <iostream>
#include <iostream>
using namespace std;
class employee
{
private:
    int code;
    string name;
    string address;

public:
    void get_data();
    void display();
};
void employee::get_data()
{
    cout << "Enter employee code::" << endl;
    cin >> code;
    cout << "Enter employee name::" << endl;
    cin >> name;
    cout << "Enter employee address::" << endl;
    cin >> address;
}
void employee ::display()
{
    cout << "Employee code ::" << code << endl;
    cout << "Employee name ::" << name << endl;
    cout << "Employee address ::" << address << endl;
}
int main()
{
    employee e1[10];
    int n;
    cout << "enter how many numbers u want" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        e1[i].get_data();
    }
    cout << "*********************************************************************************" << endl;
    cout << "Employee details are as follows" << endl;
    for (int i = 0; i < n; i++)
    {
        e1[i].display();
    }
    return 0;
}
