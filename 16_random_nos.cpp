#include<iostream>
#include<cstdlib>
#include<time.h>
// #include<ctime>---both r same as above
using namespace std;
int main()
{
    srand(time(NULL));
    for(int i=1;i<=10;i+=1)
    {
        cout<<rand()%100<<endl;
    }
    return 0;
}