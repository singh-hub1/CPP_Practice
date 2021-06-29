#include <iostream>

using namespace std;

class Circle
{
private:
    int a;

public:
    Circle()
    {
    }

    Circle(int a)
    {
        this->a = a;
      
    }

    void display()
    {
        cout << "Value of a is :: " << a<<endl;
    }

bool operator>(const Circle& c2)
{
   return this->a > c2.a;
}

bool operator<(const Circle& c2)
{
   return this->a < c2.a;
}
   
bool operator==(const Circle& c2)
{
   return this->a == c2.a;
}
   
bool operator!=(const Circle& c2)
{
   return this->a != c2.a;
}
   
bool operator>=(const Circle& c2)
{
   return this->a >= c2.a;
}
   
bool operator<=(const Circle& c2)
{
   return this->a <= c2.a;
}
   

   
};



int main()
{
    Circle c1(5), c2(6);

    if(c1>c2)    //c1.operator>(c2)
    {
     cout<<"c1 is larger"<<endl;
    }
    else
    {
        cout<<"c2 is larger"<<endl;
    }

  
    return 0;
}

//RELATIONAL OPERATORS
//>,<,<=,>=,==,!=
