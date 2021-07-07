#include <iostream>
using namespace std;
class Student
{
protected:
    int roll;

public:
    void getRoll(int x)
    {
        this->roll = x;
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
    void getMarks(int a, int b, int c)
    {
        this->mks1 = a;
        this->mks2 = b;
        this->mks3 = c;
    }

    void displayMarks()
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
    void displayAll()
    {
        total = mks1 + mks2 + mks3;
        displayRoll();
        displayMarks();
        cout << "Total marks of all 3 subject are :: " << total << endl;
    }
};

int main()
{
    Result R;
    R.getRoll(1);
    R.getMarks(10, 20, 90);
    R.displayAll();
    return 0;
}
