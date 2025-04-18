// Q1. negative element in 1D array.

#include<iostream>
using namespace std;

int main()
{

    int n;

    cout<<"enter the number of element in the array: ";
    cin>>n;

    int a[n];

    cout<<"enter array's element:  ";
    for(int i = 0; i < n; i++)
    {
        cout<<"a["<<i<<"]: ";
        cin>> a[i];
    }

    cout<<"\nnegative element in the array are: ";
    for(int i = 0; i < n; i++)
    {
        if(a[i] < 0)
        {
            cout<<a[i]<<" ";
        }
    }


    return 0;
}