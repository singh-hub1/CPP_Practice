/*#include <iostream>
#include <typeinfo>
using namespace std;
int main()
{
    int age{};
    cout << "Enter an age:" << endl;
    cin >> age;
    if (age >= 13 && age <= 18)
        cout << "yes you're teenage!!" << endl;
    else
        cout << "No you're not teenage!!" << endl;
    return 0;
}


#include<iostream>
using namespace std;
int main()
{
    int first{};
    int second{};
    cout<<"Enter the first number"<<endl;
    cin>>first;
    cout<<"Enter the second number"<<endl;
    cin>>second;

    if(first>second)
    {
        cout<<" first "<<first<<" is greater than second "<<second<<endl;

    }
    else if(second>first)
    {
         cout<<" second "<<second<<" is greater than first "<<first<<endl;
    }
    else
    {
        cout<<"both are same numbers!!"<<endl;
    }
}
*/

/*
#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter any year" << endl;
    cin >> year;
    // if (year % 4 == 0)
    // {
    //   if(year%100==0)
    //   {
    //     if(year%400==0)
    //     {
    //         cout<<"yes..its is a leap year"<<endl;
    //     }
    //     else
    //     {
    //         cout<<"not a leap year!!"<<endl;
    //     }
    //   }
    //   else
    //   {
    //       cout<<"yes..it is leap year"<<endl;
    //   }
    // }
    // else
    // {
    //     cout<<"not a leap year"<<endl;
    // }
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        cout << "yes..its a leap year" << endl;
    }
    else
    {
        cout << "not a leap year" << endl;
    }
    */

#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main()
{

    double income, tax;
    cout << "Enter your income" << endl;
    cin >> income;

    if (income < 0)
    {
        cout << "income is invalid" << endl;
    }
    if (income >= 0 && income < 5000)
    {
        tax = 0.0;
    }
    else if (income >= 5000 && income < 10000)
    {
        tax = income * 0.06;
    }
    else if (income >= 10000 && income < 20000)
    {
        tax = income * 0.12;
    }
    else if (income >= 20000 && income < 50000)
    {
        tax = income * 0.2;
    }
    else
    {
        tax = income * 0.3;
    }
    cout << "Tax:$" << setprecision(2) << fixed << tax << endl;
    return 0;
}
// write floating-point values in fixed-point notation(FIXED)
// C++ manipulator setprecision function is used to control the number of digits of an output stream display of a floating- point value. 
//This manipulator is declared in header file <iomanip>.