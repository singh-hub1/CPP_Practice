// #include<iostream>
// using namespace std;
// int main()
// {
//     int age{20};
//     cout<<"The age be :"<<age;
//     return 0;
    
// }




// REFERENCE VARIABLES

//  #include<iostream>
//  using namespace std;
//  int main()
//  {
//      int x=10;
//      int &y=x; //we use ampersand sign for refernce variables
//      cout<<"The y is :"<<y<<endl;
//      y+=1;
//       cout<<"The y is :"<<y;
//      return 0;  
//  }



 #include<iostream>
 #include<typeinfo>
 using namespace std;
 int main()
 {
     auto x=10.0;
     cout<<"Data type of x is:"<<typeid(x).name()<<endl;  //Data type of x is:d(d stands for double)
     return 0;  
 }



