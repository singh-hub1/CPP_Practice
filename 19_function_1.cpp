// #include <iostream>
// using namespace std;
// void msg()
// {
//     cout << "vishal singh" << endl;
// }

// int main()
// {
//     msg();
//     return 0;
// }

//======================================================================

// #include <iostream>
// using namespace std;

// double total_pay(int hrs, double rate) //formal parameter
// {
//     double total = hrs * rate;
//     if (hrs > 40)
//     {
//         total += (hrs - 40) * 2;
//     }

//     return total;
// }

//=======================================================================================

// int main()
// {
//     int hrs{0};
//     double rate{0};
//     hrs = 41;
//     rate = 10.0;
//     int total = total_pay(hrs, rate); //actual parameter
//     cout << "TOTAL PAY = " << total << endl;
//     return 0;
// }

//============================================================================================

/* WHEN YOU RUN THE PROGRAM ITS STARTS FROM MAIN() FUNCTION AND WHEN COMPILE THE PROGRAM IT STARTS WITH VERY FROM THE FIRST LINE*/

//  #include <iostream>
//  using namespace std;

//  double total_pay(int,double);//function declaration
//  int main()
//  {
//      int hrs{0};
//      double rate{0};
//      hrs = 41;
//      rate = 10.0;
//      int total = total_pay(hrs, rate); //actual parameter
//      cout << "TOTAL PAY = " << total << endl;
//      return 0;
//  }

//  double total_pay(int hrs, double rate) //formal parameter
//  {
//function defination
//      double total = hrs * rate;
//      if (hrs > 40)

//          total += (hrs - 40) * 2;

//      return total;
// }

//================================================================================

// #include <iostream>
// using namespace std;
// void fun(int &, int &);//reference parameter to function
// int main()
// {
//     int x{20}, y{30};
//     cout << "x = " << x << " y = " << y << endl;
//     fun(x, y);
//     cout << "x = " << x << " y = " << y << endl;
//     return 0;
// }

// void fun(int &x, int &y)//reference parameter to function
// {
//     x += 10;
//     y -= 20;
// }

//=======================================================================================

//ARMSTRONG NUMBER USING FUNCTION IN C++

// #include <iostream>
// #include <math.h>
// using namespace std;

// int nDigit(int);
// bool isarmstrong(int);

// int main()
// {
//     cout << "hello" << endl;
//     for (int i = 1; i <= 1000; i++)
//     {
//         if (isarmstrong(i))
//         {
//             cout << i << " " << endl;
//         }
//     }

//     return 0;
// }

// bool isarmstrong(int a)
// {
//     int cnt = nDigit(a);
//     int sum;
//     int temp = a;
//     while (a > 0)
//     {
//         int r = a % 10;
//         a = a / 10;
//         sum += pow(r, cnt);
//     }
//     return temp == sum;
// }

// int nDigit(int n)
// {
//     int count = 0;
//     while (n > 0)
//     {
//         n = n / 10;
//         count++;
//     }
//     return count;
// }

//===============================================================================

//CHECK A NUMBER IS PRIME NUMBER OR NOT!!!!

#include <iostream>
#include<cmath>
using namespace std;

bool isPrime(int);

bool isPrime(int n)
{
    int i;
  for(i=2;i<=sqrt(n);i++)
  {
      if(n%i==0)
      {
          return false;
      }
  }
  return true;
}

int main()
{
int n;
for(n=1;n<=100;n++)
{
    if(isPrime(n));
    {
        cout<<n<<" "<<endl;
    }
}
    return 0;
}
