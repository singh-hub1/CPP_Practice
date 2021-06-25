#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("Myfile4.txt");

    if (fout.fail())
    {
        cout << "Sorry can't open the file at this moment" << endl;
        exit(1);
    }

    string str1;

    cout << "Enter your name" << endl;
    getline(cin, str1);
    
   
    
    fout << str1<<endl;

    fout<<"hello there!!"<<endl;

    fout<<"hey there!!"<<endl;

    fout<<"hii there!!"<<endl;

    fout.close();

ifstream fin;

fin.open("Myfile4.txt");

string str2;

// fin>>str2;

cout<<"Content of the file is ::"<<endl;

while(fin.eof()==0)
{
    getline(fin,str2);

    cout<<str2<<endl;
}

fin.close();

    return 0;
    
}
