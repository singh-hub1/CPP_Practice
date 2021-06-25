#include<iostream>
#include<string.h>
using namespace std;
class employee
{
 private:
 string name;
 char post[10];
 int salary;

 public:
 static int manager,super,worker;
 void set_data();
 void display();
 void add_sal();

};

void employee :: set_data()
{
    cout<<"Enter name,post,slary"<<endl;
    cin>>name;
    cin>>post;
    cin>>salary;
}

void employee:: display()
{
    cout<<name<<" "<<salary<<" "<<post<<endl;
}

void employee ::add_sal()
{
    int x;
    x=strcmp(post,"manager");
    if(x==0)
    {
        manager=manager+salary;
    }
    x=strcmp(post,"super");
    if(x==0)
    {
        super=super+salary;
    }
    x=strcmp(post,"manager");
    if(x==0)
    {
        worker=worker+salary;
    }
}


int employee :: manager;
int employee :: super;
int employee :: worker;

int main()
{
    employee e1[10];
    int n,i;
    cout<<"Enter how many employee you want"<<endl;
    cin>>n;
for ( i = 0; i < n; i++)
{
    cout<<"Enter employee"<<i+1<<endl;
    e1[i].set_data();
    e1[i].add_sal();
}
cout <<"*****************************************************************************************************************"<<endl;
for ( i = 0; i < n; i++)
{
    cout<<"Enter employee"<<i+1<<endl;
    e1[i].display();
}

cout<<"Total salary of mangers are ::"<<employee::manager<<endl;
cout<<"Total salary of worker are ::"<<employee::worker<<endl;
cout<<"Total salary of supervisior are ::"<<employee::super<<endl;
int temp =employee :: manager+employee :: super+employee :: worker;
cout<<"Total salary of the Employee is :: "<<temp;
return 0;
}
