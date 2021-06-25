#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream fout("Myfile3.txt");
    cout << "Enter your name!" << endl;
    string name;

    // cin >> name;

    getline(cin,name);

    fout << name;

    fout.close();


    ifstream hin("Myfile3.txt");

    string content;

    // hin >> content;

    getline(hin,content);

    cout << "The content of the file is :: " << content << endl;
    
    hin.close();

    return 0;
}
