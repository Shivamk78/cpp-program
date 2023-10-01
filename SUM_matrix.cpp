#include<iostream>
using namespace std;
int main()
{ 
    int summ[2][2];
    int arr[2][2];
    int arr1[2][2];
    int row,col,i,j;
    cout<<"please enter  row : ";
    cin>>row;
    cout<<"plaease enter column : ";
    cin>>col;
    cout<<"please enter matrix 1 element "<<endl;
    for( i=0;i<row;i++)
    {
        for( j=0;j<col;j++)
        {   cout<<"enter element matrix 1 ["<<i<<"]"<<"["<<j<<"]"<<" : ";
            cin>>arr[i][j];
        }
    }
    cout<<"please enter matrix 2 element "<<endl;
    for( i=0;i<row;i++)
    {
        for( j=0;j<col;j++)
        {   cout<<"enter element matrix 1 ["<<i<<"]"<<"["<<j<<"]"<<" : ";
            cin>>arr1[i][j];
        }
    }
    cout<<"matrix 1 element are : ";
    for(i=0;i<row;i++)
    {
        for( j=0;j<col;j++)
        {
            cout<<arr[i][j];
        }cout<<endl;
    }
    cout<<"matrix 2 element are : ";
    for( i=0;i<row;i++)
    {
        for( j=0;j<col;j++)
        {
            cout<<arr1[i][j];
        }cout<<endl;
    }


    for( i=0;i<row;i++)
    {
        for( j=0;j<col;j++)
        {
            summ[i][j]=arr[i][j]+arr1[i][j];
        }
    }

    cout<<"sum of matrix is : \n";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<summ[i][j];
        }cout<<endl;
    }


}