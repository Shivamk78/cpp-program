#include<iostream>
using namespace std;

int srch(int a[],int f,int l,int search)
{
    int m;
    while(f<=l)
    {
        m=(f+l)/2;
        if(a[m]==search)
        {
            return m+1;
        }
        else if(a[m]>search)
        {
            return srch(a,f,m+1,search);
        }
        else
        {
            return srch(a,m-1,l,search);
        }
    }
}


int main()
{
    int a[5]={1,2,3,4,5};
    int f=0;
    int l=5;
    int search=3;
    cout<<srch(a,f,l,search);
}