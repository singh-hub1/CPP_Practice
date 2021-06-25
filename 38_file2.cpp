#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
    ifstream fin;
    fin.open("Myfile1.txt");
    if (!fin)
    {
        cout << "error" << endl;
        exit(1);
    }
    int val;
    int cnt = 0;
    int sum = 0;
    while (!fin.eof())
    {
        fin >> val;
        cnt++;
        sum += val;
        cout << val << " " << endl;
    }
    fin.close();
    cout << "The total count of the variable is := " << cnt << endl;
    cout << "The total sum  of the variable is := " << sum << endl;
    return 0;
}
