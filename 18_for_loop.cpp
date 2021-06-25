/*#include <iostream>
using namespace std;
int main()
{
    // for(int i=1;i<=10;i+=1)
    // {
    //     cout<<"vishal singh"<<endl;
    // }

    int i{1};
    for (i = 1; i <= 10; i += 1)
    {
        cout << "vishal singh" << endl;
    }
}
*/

/*
#include <iostream>
using namespace std;
int main()
{
    int i, j;
    
    // for(i=1,j=10;i<=10,j>=1;i+=1,j-=1)
    // {
    //     cout<<"i= "<<i<<" j= "<<j<<endl;
    // }

    // i = 1, j = 10;
    // for (; i <= 10, j >= 1;)
    // {
    //     cout << "i= " << i << " j= " << j << endl;
    //     i += 1, j -= 1;
    // }

     for(i=1,j=10;i<=10,j>=1;i+=1,j-=1);
     {
          cout<<"i= "<<i<<" j= "<<j<<endl;
          //i= 11 j= 0
     }
    return 0;
}
*/

//MULTIPLICATION TABLE
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a numner"<<endl;
    cin>>n;
    int i{};
    for(i=1;i<=10;i+=1)
    {
        cout<<n<<" X "<<i<<" = "<<n*i<<endl;
    }
    return 0;
}
*/

//FIBONACCI SERIES
/*#include <iostream>
using namespace std;
int main()
{
    int t1, t2, sum, n, i;
    cout << "Enter how many terms" << endl;
    cin >> n;
    for (t1 = -1, t2 = 1, i = 1; i <= n; i += 1)
    {
        sum = t1 + t2;
        cout << sum << " ";
        t1 = t2;
        t2 = sum;
    }
    return 0;
}
*/

/*#include <iostream>
using namespace std;
int main()
{
    int n{5};
    for (int i = 1; i <= n; i++)
    {
        cout << "i=" << i << endl;

        for (int j = 1; j <= n; j++)
            cout << " j = " << j << endl;
    }
     cout << endl;
    return 0;
}
*/


//finding factors of a number and check for prime numbers
/*#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n{};
    cout<<"enter a number"<<endl;
    cin>>n;
    cout<<"factors are: 1";
    for(int i=2;i<=sqrt(n);i+=1)
    {
        if(n%i==0)
        {
            cout<<i<< " ";
            if(i!=n/i)
            {
                cout<<n/i<<" ";
            }
        }
    }
    cout<<n<<endl;
    return 0;
}
*/

//USE OF BREAK KEYWORD

/*#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=20;i++)
    {
        cout<<i<<endl;
        if(i%5==0)
        {
            break;
        }
    }
    return 0;
}
*/


//USE OF CONTINUE KEYWORD

#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=10;i++)
    {
       
        if(i%3==0 || i%5==0)
        {
            continue;
        }
         cout<<i<<endl;
    }
    return 0;
}


