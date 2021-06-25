#include<iostream>
using namespace std;
class account
{
    private:
    int balance;
    static float roi;
    public:
    void set_balance(int b)
    {
        balance=b;
    }
    static void set_roi(float r)
    {
        roi=r;
    }
};
float account::roi=3.412;//it will defined here
int main()
{
    account a1;
    a1.set_roi(4.5);//roi is declared in private..if it not write in static keyword
    account::set_roi(5.4);//now this will call without object
     return 0;
}
