#include <iostream>
using namespace std;
class Student
{
private:
    int roll;
    string name;
    double per;
    static int cnt;

public:
    Student()
    {}
    
    Student(int roll, string name, double per)
    {
        this->roll = roll;
        this->name = name;
        this->per = per;
    }
    static void objectCounter()
    {
        cnt++;
        cout << "The object is created at times :: " << cnt << endl;
    }
    static void Display(Student);
};

void Student ::Display(Student s1)
{
    cout << "Student Roll No :: " << s1.roll << endl;
    cout << "Student Name :: " << s1.name << endl;
    cout << "Student Percentage :: " << s1.per << endl;
}
int Student ::cnt = 0;

int main()
{
    Student s1(1, "vishal", 98.9);
    s1.objectCounter();
    Student s2(2, "arya", 97.6);
    Student ::objectCounter();
    cout << "-------------------------------------------------------------" << endl;
    Student ::Display(s1);
    cout << "-------------------------------------------------------------" << endl;
    Student ::Display(s2);
    return 0;
}
