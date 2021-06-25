// #include<iostream>
// using namespace std;

// int main()
// {
//     //os allocate memory(variable) reserved in the Ram or Primary Memory
//     int temp{300};//it takes 4 bytes(in continous block)
//     cout<<"Addres of temp variable is= "<<&temp<<endl;
//     cout<<"Addres of temp variable is= "<<(unsigned)&temp<<endl;
//     //&=gives us address of that variable in run time.

// }

//======================================================================

// #include <iostream>
// using namespace std;
// int main()
// {
//     int temp{300};
//     //int *p=&temp;
//     int *p;
//     p = &temp;
//     cout << "Addres of temp variable is= " << (unsigned)&temp << endl;
//     cout << "content is *p is= " << *p << endl;
//     *p=*p+1;
//     cout << "content is *p+1 is= " << *p << endl;

// }

//================================================================

//  #include <iostream>
//  using namespace std;
//  int main()
//  {
//      int temp{300};
//      //int *p=&temp;
//      int *p;
//      //size of pointer(p) depends upon the compiler to compiler
//      cout << "size of integer pointer (p) is = " << sizeof(p) << endl; //size of integer pointer (p) is = 4
//      cout << "size of pointer (*p) is = " << sizeof(*p) << endl; //size of pointer (*p) is = 4 

//      char *k;

//      cout << "size of char pointer (k) is = " << sizeof(k) << endl; //size of char pointer (k) is = 4 
//      cout << "size of pointer (*k) is = " << sizeof(*k) << endl; //size of pointer (*k) is = 1

//      double *d;

//      cout << "size of double pointer (d) is = " << sizeof(d) << endl;//size of double pointer (d) is = 4 
//      cout << "size of pointer (*d) is = " << sizeof(*d) << endl;//size of pointer (*d) is = 8   
//  }

//=======================================================================

 #include <iostream>
 using namespace std;
 int main()
 {
     int temp1{300}, temp2{353};
     //variable are allocated in top-to-down approach in RAM(uses stack(lifo))

     cout << "Addres of temp1 variable is= " << (unsigned)&temp1 << endl;//Addres of temp1 variable is= 6422200
     cout << "Addres of temp2 variable is= " << (unsigned)&temp2 << endl;//Addres of temp2 variable is= 6422196

     int *t2 = &temp2;

     cout << "content of (t2) is:= " << t2 << endl;//content of (t2) is:= 0x61feb4 
     cout << "content of location (*t2) is:= " << *t2 << endl;//content of location (*t2) is:= 353  

     t2 = t2 + 1; //it will increment by 4 bytes..it will jump to next integer location

     cout << "content of (t2) is:= " << t2 << endl;//content of (t2) is:= 0x61feb8    
     cout << "content of location (*t2) is:= " << *t2 << endl;//content of location (*t2) is:= 300 
     //you cannot perform division and multiplication with pointer .you only do addition and subtraction only
 }

//=============================================================================


// #include <iostream>
// using namespace std;

// int main()
// {
//     int temp1{300}, temp2{353};
//     //variable are allocated in top-to-down approach in RAM(uses stack(lifo))
//     cout << "Addres of temp1 variable is= " << (unsigned)&temp1 << endl;
//     cout << "Addres of temp2 variable is= " << (unsigned)&temp2 << endl;

//     int *t2 = &temp2;
//     cout << "content of (t2) is:= " << unsigned(t2) << endl;
//     cout << "content of location (*t2) is:= " << *t2 << endl;
//     t2 = t2 + 1; //it will increment by 4 bytes..it will jump to next integer location
//     cout << "content of (t2) is:= " << unsigned(t2) << endl;
//     cout << "content of location (*t2) is:= " << *t2 << endl;

//     //you cannot perform division and multiplication with pointer .you only do addition and subtraction only
    
//     // TYPE CASTING IN POINTER IN CPP

//     char *k=(char*)t2;
//     cout<<"content of (k) is= "<<unsigned(k)<<endl;
//     cout<<"content of location (*k) is= "<<*k<<endl;

//     k=(char*)&temp2;
//     cout<<"content of (k) is= "<<unsigned(k)<<endl;
//     cout<<"content of location (*k) is= "<<*k<<endl;
// }
