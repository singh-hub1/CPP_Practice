#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    string str {"Testing"};
    for(int i = 0; i < str.size(); ++i){
        str[i]++;
    }
    cout << str << endl;//Uftujoh
 //each character of the string is incremented by 1, so it will be next character for each of them.
    return 0;
}