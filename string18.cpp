#include <iostream>
#include <string>
#include <sstream>
using namespace std;
 
int main()
{
    string str{"4 8 abc 3"};    // string contains integers as well as non-integers separated with spaces
    istringstream iss{str};     // iss is feeded with the string str
    int val;
    int sum = 0;
    while(iss >> val){          // as long as we can extract an integer from iss the loop will iterate.
                                // think carefully here, will >> be able to extract abc ?
        sum += val;
    }
    cout << sum << endl;//12
 
    return 0;
}