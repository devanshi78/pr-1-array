#include<iostream>
using namespace std;

int main()
{

    int row,col,index,sum=0;

    cout<<"enter number of row: ";
    cin>>row;

    cout<<"enter number of column: ";
    cin>>col;

    int a[row][col];

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout<<"enter array's element a["<<i<<"]["<<j<<"]: ";
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

    int choice;
    do
    {
        int sum=0;

        cout<<"enter 1 for sum of row: "<<endl;
        cout<<"enter 2 for sum of column: "<<endl;
        cout<<"enter 3 for Diagonal Elements: "<<endl;
        cout<<"enter 0 for Exit: "<<endl;
        cin >> choice;

        switch(choice)
        {
            case 1 :
                cout<<"enter index of row for sum: ";
                cin>>index;

                for(int i = 0; i < row; i++)
                {
                    for(int j = 0; j < col; j++)
                    {
                        if(i == index)
                        {
                            sum += a[i][j];
                        }
                    }
                    cout<<endl;
                }
            cout<<"sum of row "<<index<<" is "<<sum<<endl;
            break;

            case 2 :
                cout<<"enter index of col for sum: ";
                cin>>index;

                for(int i = 0; i < row; i++)
                {
                    for(int j = 0; j < col; j++)
                    {
                        if(j == index)
                        {
                            sum += a[i][j];
                        }
                    }
                    cout<<endl;
                }
            cout<<"sum of col "<<index<<"is "<<sum<<endl;
            break;

            case 3 :
                for(int i = 0; i < row; i++)
                {
                    for(int j = 0; j < col; j++)
                    {
                        if(i == j)
                        {
                            cout<<a[i][j]<<" ";
                        }
                        else
                        {
                            cout << "  ";
                        }
                    }
                    cout<<endl;
                }
            cout<<"sum of row "<<index<<" is "<<sum<<endl;
            break;

            case 0 :
                break;
            
            default:
                cout<<"wrong choice!!!";
        }
        
    }while(choice != 0);

    return 0;
}