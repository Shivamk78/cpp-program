#include<iostream>
using namespace std;
int srh(int arr[],int sr,int si)
{
    for(int i=0;i<si;i++)
    {
        if(arr[i]==sr)
        {
            return i+1;
        }
    }
    // return -1;
}


int main()
{
    int res;
    int a[6]={1,2,3,4,5,6};
    int srch=11;
    int size=6;
    cout<<srh(a,srch,size);
    // if(res==-1)
    // {
    //     cout<<"element not found ";
    // }
    // else
    // {
    //     cout<<"element in index at in "<<res;
    // }
}