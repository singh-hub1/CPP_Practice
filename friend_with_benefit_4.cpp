#include <iostream>
using namespace std;
class complex
{
private:
    int a, b;

public:
    void set_data(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "a =  " << a << " "
             << "b = " << b << endl;
    }
    friend ostream& operator<<(ostream&, complex);
    friend istream& operator>>(istream&, complex&);
};
ostream & operator<<(ostream &dout, complex c)
{
    cout << " a = " << c.a << " b = " << c.b;
    return cout;
}
istream & operator>>(istream &din, complex &c)
{
    cin >> c.a;
    cin >> c.b;
    return din;
}
int main()
{
    complex c1;
    cout << "Enter a complex number" << endl;
    cin >> c1;
     cout << "You entered this number" << endl;
    cout << c1;
    return 0;
}
