#include<iostream>
using namespace std;
int main()
{
    // int a[20];
    // int lim;
    // cout<<"please enter array limit : ";
    // cin>>lim;
    // for(int i=0;i<=lim;i++)
    // {   cout<<"please enter array "<<i<<" ";
    //     cin>>a[i];
    // }

    // // for(int i=0;i<=lim;i++)
    // // {
    // //     cout<<a[i]<<" ";
    // // }
    // for(int i=lim+1;i>=1;i--)
    // {
    //     cout<<a[i]<<" ";
    // }

    int a[20],sum=0;
    int lim,i;
    cout<<"please enter limit : ";
    cin>>lim;
    for( i=0;i<lim;i++)
    {   cout<<"please enter  "<<i<<":  ";
        cin>>a[i];
    }   
    int *p[20];
  
    for( i=0;i<lim;i++)
    {
       p[i]=&a[i];
    }  
    for( i=0;i<lim;i++)
    {
       cout<<*p[i]<<" ";
    } 
}