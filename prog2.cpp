#include<iostream>
using namespace std;

int main()
{
    int row,col,max;

    cout<<"enter number of row: ";
    cin>>row;

    cout<<"enter number of column: ";
    cin>>col;

    int a[row][col];

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout<<"enter the value of a["<<i<<"]["<<j<<"]: ";
            cin>>a[i][j];
        }
        cout<<endl;
    }
    for(int i = 0;i < row;i++)
    {
        for(int j = 0;j < col;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    max=a[0][0];

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(a[i][j]>0)
            {
                max = a[i][j];
            }
        }
    }

    cout<<"the largest element is: "<<max<<endl;

    return 0;
}