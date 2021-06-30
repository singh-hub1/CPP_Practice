//TO FIND 1'S AND 0'S COMPLEMENT WITH THE HELP OF OOPS CONCEPT IN CPP.

#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void read();
    void check_bin();
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
            cout << "invalid binary number";
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
}

int main()
{
    binary b;
    b.read();
    b.check_bin();
    b.ones();
    b.display();
    return 0;
}