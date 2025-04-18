#include<iostream>
using namespace std;

int main()
{
    int n,row,col;

    cout<<"enter number of row: ";
    cin>>row;

    cout<<"enter number of column: ";
    cin>>col;

    int a[row][col];

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout<<"enter element of a["<<i<<"]["<<j<<"]: ";
            cin>>a[i][j];
        }
    }

    for(int i = 0;i < row;i++)
    {
        for(int j = 0;j < col;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"transpose matrix: "<<endl;
    for(int i = 0;i < row;i++)
    {
        for(int j = 0;j < col;j++)
        {
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}