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
        cout << "a = " << a <<" "<< "b = " << b << endl;
    }
    friend complex operator-(complex);
};
 complex operator-(complex x1)
{
    complex temp;
    temp.a=-x1.a;
    temp.b=-x1.b;
    return temp;

}
int main()
{
    complex c1;
    c1.set_data(-8, 5);
    c1.display();
    cout<<"***********************"<<endl;
    complex c2=operator-(c1);

    c2.display();

    return 0;
}
