#include <iostream>
 using namespace std;
 int main()
 {
     int temp1{300}, temp2{353};
     //variable are allocated in top-to-down approach in RAM(uses stack(lifo))
     cout << "Addres of temp1 variable is= " << (unsigned)&temp1 << endl;
     cout << "Addres of temp2 variable is= " << (unsigned)&temp2 << endl;
     int *t2 = &temp2;
     cout << "content of (t2) is:= " << unsigned(t2) << endl;
     cout << "content of location (*t2) is:= " << *t2 << endl;
     t2 = t2 + 1; //it will increment by 4 bytes..it will jump to next integer location
     cout << "content of (t2) is:= " << unsigned(t2) << endl;
     cout << "content of location (*t2) is:= " << *t2 << endl;
     //you cannot perform division and multiplication with pointer .you only do addition and subtraction only  
     // TYPE CASTING IN POINTER IN CP
     char *k=(char*)t2;
     cout<<"content of (k) is= "<<unsigned(k)<<endl;
     cout<<"content of location (*k) is= "<<*k<<endl;
     k=(char*)&temp2;
     cout<<"content of (k) is= "<<unsigned(k)<<endl;
     cout<<"content of location (*k) is= "<<*k<<endl;
 }
