 #include<iostream>
 using namespace std;

class shop
{
    int id[100];
    int price[100];
    int  counter;

    public :
       void initcounter(){counter=0;}
       void setprice();
       void display();
       

};

void shop :: setprice()
{
    cout<<" Enter id of your item "<<counter+1<<endl;
    cin>>id[counter];
    cout<<" Enter price of your item "<<endl;
    cin>>price[counter];
    counter++;
}

void shop :: display()
{
    for(int i=0;i<counter ;i++)
      {
         cout<<" The item id is :: "<<id[i]<<" And  price is :: "<<price[i]<<endl;
      }
}

 int main()
 {
     shop s1;
     s1.initcounter();

     s1.setprice();
     
     s1.setprice();
     
     s1.display();
    
     return 0;
 }