// RECEIVING POINTER AS PARAMETER IN FUNCTION

//=============================================================================

// #include<iostream>
// using namespace std;
// void fun(int a,int b)
// {
//        cout<<":::::::::::Changes only in the function call::::::"<<endl;
//     a=a+10;
//     cout<<"a = "<<a<<endl;
//     b=b-10;
//     cout<<"b = "<<b<<endl;

// }
// int main()
// {
//   int a {10} ,b{20};
//    cout<<":::::::::::Before the function call::::::"<<endl;
//   cout<<"a = "<<a<<endl;
//   cout<<"b = "<<b<<endl;
//   fun(a,b);
//   cout<<":::::::::::After the function call::::::"<<endl;
//   cout<<"a = "<<a<<endl;
//   cout<<"b = "<<b<<endl;
//   return 0;
// }

//====================================================================================

#include<iostream>
using namespace std;
void fun(int* a,int* b)
{
       cout<<":::::::::::Changes only in the function call::::::"<<endl;
    *a=*a+10;
    cout<<"a = "<<*a<<endl;
    *b=*b-10;
    cout<<"b = "<<*b<<endl;

}
int main()
{
  int a {10} ,b{20};
   cout<<":::::::::::Before the function call::::::"<<endl;
  cout<<"a = "<<a<<endl;
  cout<<"b = "<<b<<endl;
  fun(&a,&b);
  cout<<":::::::::::After the function call::::::"<<endl;
  cout<<"a = "<<a<<endl;
  cout<<"b = "<<b<<endl;
  return 0;
}

//======================================================================