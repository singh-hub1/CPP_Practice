#include<iostream>
#include<string>
using namespace std;
class Student
{
    private:
    int roll;
    string name;
    string address;

    public:

    Student()
    {}

    Student(string name,string address,int roll)
    {
        this->name=name;
        this->address=address;
        this->roll=roll;
    }
    ~Student()
    {
        cout<<"Object is destroyed!!"<<endl;
    }
    void display();
    
    
};
void Student ::display()
{
    cout<<"Student name is :: "<<name<<endl;
    cout<<"Student address is :: "<<address<<endl;
    cout<<"Student roll is :: "<<roll<<endl;
}

int main()
{
    Student s1("vishal singh","pune",1);
    s1.display();

    cout<<"------------------------------------------------------"<<endl;

    Student s2;
    s2=Student("Arya","delhi",2);

    s2.display();
     cout<<"------------------------------------------------------"<<endl;

return 0;
}
