#include <iostream>
#include <iomanip>
using namespace std;
class Student
{
private:
    int roll;
    string name;
    string addr;

public:
    Student()
    {
    }

    void getData();
    void displayData();

    ~Student()
    {
        cout << "Destructor called" << endl;
    }
};

void Student ::getData()
{
    cout << "Enter Student Roll ::" << endl;
    cin >> roll;
    cout << "Enter Student Name ::" << endl;
    cin >> name;
    cout << "Enter Student Address ::" << endl;
    cin >> addr;

    cout << "*********************************" << endl;
}

void Student ::displayData()
{
    cout << " Student  roll::" << roll << endl;

    cout << " Student  name::" << name << endl;

    cout << " Student  address::" << addr << endl;

    cout << "--------------------------------------------------" << endl;
}

int main()
{
    Student *ptr1;

    int n;
    cout << "Enter how many numbers u want" << endl;
    cin >> n;
    ptr1 = new Student[n];

    for (int i = 0; i < n; i++)
    {
        ptr1->getData();
        cout << endl;
    }
    cout << "*****************************************************" << endl;
    
    cout << " :: Student details are as follows :: " << endl;
    
    for (int i = 0; i < n; i++)
    {
        ptr1->displayData();
    }

    // cout << "Destructor called :: " << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     s1[i].~Student(); //It will call 50 times
    // }

    return 0;
}
