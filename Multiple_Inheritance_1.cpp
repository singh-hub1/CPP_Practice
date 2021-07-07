#include <iostream>
#include <cstring>
#include <string>
using namespace std;
class Personal
{
private:
    string name;
    // char name[20];
    string email_id;

protected:
    void getPersonal();
    void dispPersonal();
};

void Personal::getPersonal()
{
    cout << "Enter Name :: " << endl;
    // cin >> name;
    getline(cin, name);
    cout << "Enter Email :: " << endl;
    cin >> email_id;
}

void Personal::dispPersonal()
{
    cout << "Name is :: " << name << endl;
    cout << "Email Id is :: " << email_id << endl;
}

class Academic
{
private:
    float marks;
    char grade[20];

protected:
    void getAcademic();
    void findAcademic();
    void displayAcademic();
};

void Academic ::getAcademic()
{
    cout << "Enter your Academic marks :: " << endl;
    cin >> marks;
}

void Academic ::findAcademic()
{
    if (marks >= 70)
        strcpy(grade, "Distincation");
    else if (marks >= 60)
        strcpy(grade, "First Class");
    else if (marks >= 50)
        strcpy(grade, "Second Class");
    else if (marks >= 40)
        strcpy(grade, "Pass Class");
    else
        strcpy(grade, "FAIL");
}

void Academic ::displayAcademic()
{
    cout << "Academic Marks :: " << marks << endl;
    findAcademic();
    cout << "Academic Qualification :: " << grade << endl;
    cout << "--------------------------------------------------" << endl;
}

class Bio_data : private Personal, private Academic
{
public:
    void displayBiodata();
    void getInfo();
};

void Bio_data ::displayBiodata()
{
    cout << "***********************************************BIO DATA***********************************************************" << endl;
    cout << "*********************************************Persoal Info :: *****************************************" << endl;
    dispPersonal();
    cout << "*********************************************Academic Info ::******************************************* " << endl;
    displayAcademic();
}

void Bio_data::getInfo()
{
    getPersonal();
    getAcademic();
}

int main()
{
    Bio_data b1;
    b1.getInfo();
    b1.displayBiodata();

    return 0;
}