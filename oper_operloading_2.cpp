
#include <iostream>

using namespace std;

class complex
{
    
    private:

    int a;

public:

    complex(int x)
    {
        this->a = x;    
    }

    complex()
    {}

    void display()
    {
        cout << "a :: " << a << endl;
    }

    
  complex operator+(const complex& c1)      //  complex operator+( complex c1)
   {
        complex temp;
        temp.a = this->a + c1.a;
        return temp;
    }

};

int main()
{
    complex c1(4), c2(8), c3;

    c3 = c1 + c2;

    cout<<"----------------------THE OUTPUT IS ::------------"<<endl;

    c3.display();
    
    return 0;
}