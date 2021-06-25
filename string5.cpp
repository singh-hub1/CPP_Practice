#include <iostream>
#include <string>
using namespace std;

bool isVowel(char ch)
{
    if ((ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U') || (ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u'))

    {
        return true;
    }
    else
    {
        return false;
    }
}
int countVowels(string str)
{
    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (isVowel(str.at(i)) == true)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    string str;
    cout << "Enter your name" << endl;
    getline(cin, str);
    cout << "Your name is " << str << endl;
    cout << "The total number of vowels present in the string is " << countVowels(str);

    return 0;
}
