#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    string name;
    int roll;

public:
    Student()
    {
    }

    Student(string name, int roll)
    {
        this->name = name;
        this->roll = roll;
    }

    void display()
    {
        cout << "Student name is :: " << name << endl;
        cout << "Student roll is :: " << roll << endl;
    }
};

int main()
{
    Student s1("vishal", 20); //Implicit call of constructor

    cout << "Details of s1 object of class Student" << endl;
    s1.display();

    cout << endl
         << "---------------------------------------------------------------------------------------"
         << endl;

    Student s2;
    s2 = Student("arya", 3);   //Explicit call of constructor

    cout << "Details of s2 object of class Student" << endl;
    s2.display();

    return 0;
}
