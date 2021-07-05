#include <iostream>
using namespace std;
class student
{
private:
     int id;
    mutable string name;

public:
    student()
    {
    }

    student(string name, int id) 
    {
        this->name = name;
        this->id = id;
    }
    void display()  const
    {
        cout << "Name is :: " << name << endl;
        cout << "Id is :: " << id << endl;
    }
    void changeId(int id) 
    {
        this->id = id;
    }
    void changeName(string name) const
    {
        this->name = name;
    }
};
int main()
{
    student s1("vishal isngh", 1);
    s1.display();
    cout << "**********************************" << endl;
    s1.changeId(7);
    s1.changeName("Arya singh");
    cout << "**********************************" << endl;
    s1.display();

    return 0;
}
