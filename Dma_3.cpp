//THIS IS THE EXAMPLE OF SHALLOW COPY INSIDE THE ARRAY.

#include<iostream>
#include<iomanip>
using namespace std;

int* getArray(int n)
{
    int *p=new int[n];

    for (int i = 0; i < n; i++)
    {
        cout<<"Next int ::" <<endl;
        cin >>*(p+i);
    }
    cout<<endl;

    return p;
    
}

void printArray(int *q,int n)
{
    cout<<"Content of the array "<<endl;
    for (int i = 0; i < n; i++)
    {
       
        cout<<setw(5)<<*(q+i);
    }
    cout<<endl;
}


int *copyArray(int *q,int n)
{
    int *d{q};
    return d;
}

int main()
{
    cout<<"Input the number of elements you want to process"<<endl;

    int n;

    cin>>n;

    int *source=getArray(n);

    int *dest=copyArray(source,n);


    printArray(source,n);
    delete[] source;
    
    printArray(dest,n);
    delete[] dest;


return 0;
}
