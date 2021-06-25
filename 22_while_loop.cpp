
//ENTRY CONTROLLED LOOP
/*#include <iostream>
using namespace std;
int main()
{
    int i{1};
    while (i <= 10)
    {
        cout << "vishal singh" << endl;
        cout << "i=" << i << endl;
        i += 1;
    }
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    long fact{1};
    int n;
    cout << "Enter a number\n"
         << endl;
    cin >> n;
    if (n < 0)
    {
        cout << "plzz enter a positive number\n";
        return 0;
    }
    int i = n;
    while (i >= 1)
    {
        fact *= i;
        i -= 1;
    }
    cout << "factorial of " << n << " is=" << fact << endl;
}

//find sum of numbers using while loop
#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum{0};
    cout << "enter any number\n";
    cin >> n;
    int c{0};
    while (n != 0)
    {
        sum += n;
        c++;
        cout << "enter any number\n";
        cin >> n;
    }
    cout << "sum of all the numbers" << sum << endl;
    // float avg=sum/(float)c;
    float avg = (float)sum / c;
    cout << "average is " << avg << endl;
}

//find sum of digit of a number
#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;
int main()
{
    int n{};
    cout << "Enter a number" << endl;
    cin >> n;
    n = abs(n);
    int sum{0};
    int rem{0};
    while (n > 0)
    {
        rem = n % 10;
        sum += rem;
        n /= 10;
    }
    cout << "sum of a digit is= " << sum << endl;

    return 0;
}
*/
#include <iostream>
using namespace std;
int main()
{
    int i{1};
    while (i <= 10)
        ; // goes into the infinite loop
    {
        cout << "vishal singh" << endl;
        i += 1;
    }
}
