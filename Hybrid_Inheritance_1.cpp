// hybrid Inheritance is a combination of Multiple and Multilevel inheritance.

#include <iostream>
using namespace std;
class Student
{
protected:
    int roll_no;

public:
    void getRoll(int x)
    {
        this->roll_no = x;
    }

    void displayStudent()
    {
        cout << roll_no << endl;
    }
};

class test : public Student //This test class is derived from Student class
{
protected:
    int mks1, mks2;

public:
    void getMarksTest(int a, int b)
    {
        this->mks1 = a;
        this->mks2 = b;
    }
    void displayMarksTest()
    {
        cout << mks1 << endl
             << mks2 << endl;
    }
};

class Sport
{
protected:
    int sportMarks;

public:
    void getSportMarks(int s)
    {
        this->sportMarks = s;
    }
    void displaySport()
    {
        cout << sportMarks << endl;
    }
};

class Result : public test, public Sport //This Result class is derived from two classes i.e test class and sport class.
{
private:
    int total;

public:
    void displayResult()
    {
        total = mks1 + mks2 + sportMarks;
        displayStudent();
        displayMarksTest();
        displaySport();
        cout << "Total is :: " << total << endl;
    }
};

int main()
{
    Result R;
    R.getRoll(10);
    R.getMarksTest(50, 60);
    R.getSportMarks(70);
    R.displayResult();
    return 0;
}
