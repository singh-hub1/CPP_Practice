
//THIS IS MORE COMAPACT THEN PREVIOUS ONE

#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;
    void check_bin();

public:
    void read();
    void ones();
    void display();
};

void binary ::read()
{
    cout << "enter a binary number" << endl;
    cin >> s;
}

void binary ::check_bin()
{

    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "invalid binary number" << endl;
            exit(0);
        }
    }
}

void binary ::display()
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

void binary ::ones()
{
    check_bin();

    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
    display();
}

int main()
{
    binary b;
    b.read();
    b.ones();

    return 0;
}