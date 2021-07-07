#include <iostream>
#include <string>
#include <cstring>
using namespace std;
class Employee
{
protected:
    char name[20];
    // string name;
};

class Full_time : protected Employee
{
private:
    float daily_rate;
    double salary;
    int no_of_days;

public:
    void readData();
    void displayData();
    void calculateSalary();
};

void Full_time::readData()
{
    cout << "Enter Name of Employee " << endl;
    cin >> name;
    // getline(cin,name);
    cout << "Enter working rate for complete one day " << endl;
    cin >> daily_rate;
    cout << "Enter number of working days of employee " << endl;
    cin >> no_of_days;
}

void Full_time::displayData()
{
    cout << "Data for Full time of Employee :: " << endl;
    cout << "Employee name :: " << name << endl;
    cout << "Daily Rate :: " << daily_rate << endl;
    cout << "Number of working days :: " << no_of_days << endl;
    cout << "Salary :: " << salary << endl;
}

void Full_time::calculateSalary()
{
    salary = daily_rate * no_of_days;
}

class Half_time : protected Employee
{
private:
    float hrs_rate;
    double salary;
    int no_of_hrs;

public:
    void readData();
    void displayData();
    void calculateSalary();
};

void Half_time::readData()
{
    cout << "Enter Name of Employee " << endl;
    cin >> name;
    // getline(cin,name);
    cout << "Enter working rate for Half day " << endl;
    cin >> hrs_rate;
    cout << "Enter number of working Hours of employee " << endl;
    cin >> no_of_hrs;
}

void Half_time::displayData()
{
    cout << "Data for Half time of Employee :: " << endl;
    cout << "Employee name :: " << name << endl;
    cout << "Hourly Rate :: " << hrs_rate << endl;
    cout << "Number of working hours :: " << no_of_hrs << endl;
    cout << "Salary :: " << salary << endl;
}

void Half_time::calculateSalary()
{
    salary = hrs_rate * no_of_hrs;
}
int main()
{
    int choice;
    do
    {

        cout << "1.Read and Display Data for Full time Employee :: " << endl;
        cout << "2.Read and Display Data for Half time Employee :: " << endl;
        cout << "3.Exit" << endl;
        cout << "Enter Your Choice ? " << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            Full_time ft;
            ft.readData();
            ft.calculateSalary();
            ft.displayData();

            break;
        case 2:
            Half_time ht;
            ht.readData();
            ht.calculateSalary();
            ht.displayData();

            break;

        case 3:
            exit(1);
            break;
        default:
            cout << "Invalid Choice !!!" << endl;
            break;
        }
    } while (choice >= 3);

    return 0;
}
