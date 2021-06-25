/*
DEFAULT PARAMETER IN FUNCTON
*/



// #include<iostream>
// using namespace std;
// int add (int a,int b)
// {
//     return a+b;
// }
// int main()
// {
//     int r=add(10,20);
//     cout<<r<<endl;
// }

//===========================================================
// #include<iostream>
// using namespace std;
// int add (int a,int b=20)
// {
//     return a+b;
// }
// int main()
// {
//     int r=add(10);
//     cout<<r<<endl;
// }

//==================================================================

// #include<iostream>
// using namespace std;
// int add (int a,int b=50)
// {
//     return a+b;
// }
// int main()
// {
//     int r=add(10,20);
//     cout<<r<<endl;
// }

//===================================================================
// #include <iostream>
// using namespace std;
// int add(int, int = 20);

// int add(int a, int b = 50) //this will give you error bcoz in declaration it will already there
// {
//     return a + b;
// }
// int main()
// {
//     int r = add(10, 20);
//     cout << r << endl;
// }

//================================================================

//  #include<iostream>
//  using namespace std;
// int add(int, int = 2);

// int add(int a,int b) 
// {
//     return a + b;
// }
// int main()
// {
//     int r = add(10, 20);
//     cout << r << endl;
// }

//=========================================================

// #include<iostream>
//  using namespace std;
// int add(int, int = 2);

// int add(int a,int b) 
// {
//     return a + b;
// }
// int main()
// {
//     int r = add(10);
//     cout << r << endl;
// }

//=============================================================

// #include<iostream>
//  using namespace std;
// int add(int=2, int);//error

// int add(int a,int b) 
// {
//     return a + b;
// }
// int main()
// {
//     int r = add(10);
//     cout << r << endl;
// }

//===============================================================

#include<iostream>
 using namespace std;
int add(int=2, int=4);//error

int add(int a,int b) 
{
    return a + b;
}
int main()
{
    int r = add();
    cout << r << endl;
}

