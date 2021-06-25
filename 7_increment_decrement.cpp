#include <iostream>
using namespace std;
int main()
{
    int x{10};
    cout << "x=:" << x << endl;
    x++;
    cout << "x=:" << x << endl;

    int y{5};
    cout << "y=:" << y << endl;
    y--;
    cout << "y=:" << y << endl;

    cout << "post increment and pre increment" << endl;
    int a{9};
    int p{};
    cout << "a=:" << a << endl;
    cout << "p=:" << p << endl;
    p = a++;
    cout << "a=:" << a << endl;
    cout << "p=:" << p << endl;
    p = ++a;
    cout << "a=:" << a << endl;
    cout << "p=:" << p << endl;

    cout << "post decrement and pre decrement" << endl;
     cout << "a=:" << a << endl;
    cout << "p=:" << p << endl;
    p = a--;
    cout << "a=:" << a << endl;
    cout << "p=:" << p << endl;

    p = --a;
    cout << "a=:" << a << endl;
    cout << "p=:" << p << endl;
}