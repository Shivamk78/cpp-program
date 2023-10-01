#include<iostream>
using namespace std;
int main()
{
    int lim;
    cout<<"please enter limit of array : ";
    cin>>lim;
    int a[lim];
    for(int i=0;i<lim;i++)
    {
        cout<<"enter element "<<i<<" ";
        cin>>a[i];
    }
    int s;
    cout<<"plaese enter search element: ";
    cin>>s;
    for(int i=0;i<lim;i++)
    {
        if(a[i]==s)
        {
            cout<<"search element at index in : "<<i+1;
            
        }
        
    }
}