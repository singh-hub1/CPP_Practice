#include <iostream>
using namespace std;

class Complex
{
    int a, b;
   

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is :: " << a << " + " << b << "i" << endl;
    }
     friend Complex sumComplex(Complex o1, Complex o2);
};

Complex sumComplex(Complex o1, Complex o2)
{
    Complex temp;

    temp.a = o1.a + o2.a;
    temp.b = o1.b + o2.b;
    return temp;
}

int main()
{
    Complex c1, c2, sum;
    int a, b;

    cout << "*****************************COMPLEX c1*****************************************" << endl;

    cout << "Enter the value of a :: " << endl;
    cin >> a;
    cout << "Enter the value of b :: " << endl;
    cin >> b;

    c1.setNumber(a, b);
    c1.printNumber();

    cout << "*************************COMPLEX c2*********************************************" << endl;

    cout << "Enter the value of a :: " << endl;
    cin >> a;
    cout << "Enter the value of b :: " << endl;
    cin >> b;

    c2.setNumber(a, b);
    c2.printNumber();

    cout << "*************************FRIEND FUNCTION*********************************************" << endl;

    sum = sumComplex(c1, c2);
    sum.printNumber();

    return 0;
}

/* Properties of friend functions
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contans the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.

*/
