//WRITING INTO A TEXT FILE.

#include <iostream>
#include <fstream>
#include <cstdlib> //for exit()

using namespace std;

int main()
{
    ofstream fout;
    fout.open("Myfile.txt");
    //agar nai bana h to bana dega aur agar bana hua h to overwrite hoga content of the file.

    if (fout.fail())
    {
        cout << "Error in opening file" << endl;
        exit(1);
    }
    fout << "hello vishal singh" << endl;
    fout << "hello jasu..how are u bro!!" << endl;
    int a = 45;
    double p = 74.88;
    fout << a << p << endl;

    fout.close();
    return 0;
}
