#include<iostream>
using namespace std;
int main()
{
    int m[10][10]={0},m1[10][10],m2[10][10],i,k,j;
    int row,col;
    cout<<"please enter  row : ";
    cin>>row;
    cout<<"plaease enter column : ";
    cin>>col;

    cout<<"please enter matrix 1 element : "<<endl;
    for( i=0;i<row;i++)
    {
        for( j=0;j<col;j++)
        {   cout<<"enter element matrix 1 ["<<i<<"]"<<"["<<j<<"]"<<" : ";
            cin>>m1[i][j];
        }
    }

    cout<<"please enter matrix 2 element "<<endl;
    for( j=0;j<row;j++)
    {
        for( k=0;k<col;k++)
        {
           cout<<"enter element matrix 1 ["<<j<<"]"<<"["<<k<<"]"<<" : ";
            cin>>m2[j][k];
        }
    }

    cout<<"matrix 1 element are : ";
    for( i=0;i<row;i++)
    {
        for( j=0;j<col;j++)
        {
            cout<<m1[i][j];
        }cout<<endl;
    }

    cout<<"matrix 2 element are : ";
    for(j=0;j<row;j++)
    {   
        for(k=0;k<col;k++)
        {
            cout<<m2[j][k];
        }cout<<endl;
    }

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            for(k=0;k<col;k++)
            {
                m[i][k]=m1[i][j]*m2[j][k]+m[i][k];                
            }
        }
    }
    
    
    
    cout<<"multipliction of matrix : "<<endl;
    for(i=0;i<row;i++)
    {
      for(j=0;j<col;j++)
        {
          cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
  
}