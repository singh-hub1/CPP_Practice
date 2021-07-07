#include <iostream>
using namespace std;
class Student
{
protected:
    int roll;

public:
    Student(int a)
    {
        this->roll = a;
    }

    void displayRoll()
    {
        cout << "Student roll number is :: " << roll << endl;
    }
};

class Test : public Student
{
protected:
    int mks1, mks2, mks3;

public:
    Test(int a, int b, int c, int d) : Student(a)
    {
        this->mks1 = b;
        this->mks2 = c;
        this->mks3 = d;
    }

    void displayAll()
    {

        cout << "Marks of First Subject is :: " << mks1 << endl;
        cout << "Marks of Second Subject is :: " << mks2 << endl;
        cout << "Marks of Third Subject is :: " << mks3 << endl;
    }
};

class Result : public Test
{
private:
    int total = 0;

public:
    Result(int a, int b, int c, int d) : Test(a, b, c, d)
    {
    }
    void displayAll()
    {
        total = mks1 + mks2 + mks3;
        displayRoll();
        Test::displayAll();
        cout << "Total marks of all 3 subject are :: " << total << endl;
    }
};

int main()
{
    Result R(1, 10, 20, 30);
    R.displayAll();
    return 0;
}
