#include <iostream>
#include <string>
using namespace std;
int factorial(int n)
{
    int fact = 1;
    if (n < 0)
    {
        string error = "Unable to calculate factorial of negative number!!";
        throw error;
    }
    for (int i = 1; i <= n; ++i)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int n;
    try
    {
        cout << "Enter the number" << endl;
        cin >> n;
        cout << factorial(n) << endl;
    }
    
    catch(std::string ex)
    {
        cout<<ex<<endl;
    }

    return 0;
}
