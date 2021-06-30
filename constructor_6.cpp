#include <iostream>
#include <string>
using namespace std;
class Human
{
private:
    string name;

public:
    Human(string n) : name(n)   //This is another method initializing the varibale of the class with this
    {}

    void display()
    {
        cout << "Your name is :: " << name << endl;
    }

};

int main()
{
    Human *ptr;
    ptr = new Human("Vishal Singh");
    ptr->display();

    return 0;
}
