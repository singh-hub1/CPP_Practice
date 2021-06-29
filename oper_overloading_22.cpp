#include <iostream>
using namespace std;
class student
{
private:
    int id;
    char name[20];

public:
    // friend istream& operator>>(istream &in, student &s)
    friend void operator>>(istream &in, student &s)
    {
        cout << "Enter student id" << endl;
        in >> s.id;
        cout << "Enter student name" << endl;
        in >> s.name;
        // return in;
    }

    // friend ostream& operator<<(ostream &out, student &s)
    friend void operator<<(ostream &out, student &s)
    {
        cout << "Student id is ::" << s.id << endl;
        cout << "Student name is ::" << s.name << endl;
        // return out;
    }
};

int main()
{
    student s;
    cout << "Studnet information is ::" << endl;
    cin >> s;
    cout << s;

    return 0;
}
