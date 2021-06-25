#include<iostream>
#include<iostream>
using namespace std;
class employee
{
    private:
    int code;
    string name;
    string address;
    public:
    void get_data(int,string,string);
    void display();   

};
void employee:: get_data(int c,string n,string addr)
    {
       code=c;
       name=n;
       address=addr;

    }
    void employee :: display()
    {
        cout<<"Employee code ::"<<code<<endl;
        cout<<"Employee name ::"<<name<<endl;
        cout<<"Employee address ::"<<address<<endl;
    }
int main()
{
     employee e1; 
     e1.get_data(1001,"vishal","patna");
     e1.display();
   
return 0;
}
