#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

double getAverage(string marks);
char getgrade(double avg);

int main()
{
    ifstream fin;

    ofstream fout;

    fin.open("Myfile2.txt");

    if (!fin)
    {
        cout << "error" << endl;
        exit(1);
    }


    fout.open("Myreport.txt");

    if (!fout)
    {
        cout << "error" << endl;
        exit(1);
    }

    string line;

    fout << setw(15) << left << " NAME "
         << " "
         << setw(7) << left << " AVERAGE "
         << " "
         << setw(5) << left << " GRADE"
         << endl;


    fout << string(40, '-');


    while (!fin.eof())
    {
        getline(fin, line);
        // fin>>line;----this is testing purpose
        // cout << line << endl;
        string name;

        string marks;

        istringstream iss(line);

        getline(iss, name, ':');

        getline(iss, marks, ':');


        double avg = getAverage(marks);

        char grade = getgrade(avg);

        fout << endl;

        fout << setw(15) << left << name

             << setw(8) << right << setprecision(2) << fixed << avg

             << setw(7) << right << grade << endl;


        // cout << "NAME :: " << name << "----- "
        //      << " MARKS :: " << marks << " -----"
        //      << " AVERAGE :: " << avg << "-----"
        //      << " GRADE :: " << grade << endl;
    }

    fin.close();

    fout.close();

    cout << "Myreport.txt is loading...." << endl;
    
    return 0;
}

double getAverage(string marks)
{

    istringstream iss1(marks);

    string m;

    int total = 0;

    while (!iss1.eof())

    {

        getline(iss1, m, ',');

        total += atoi(m.c_str());

    }
    double avg = (double)total / 3;


    return avg;

}

char getgrade(double avg)

{

    if (avg >= 90.0)

        return 'A';

    else if (avg >= 80.0 && avg <= 90.0)
        return 'B';

    else if (avg >= 70.0 && avg <= 80.0)
        return 'C';

    else if (avg >= 60.0 && avg <= 70.0)
        return 'D';

    else if (avg >= 50.0 && avg <= 60.0)
        return 'E';

    else
        return 'F';
}