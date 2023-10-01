#include<iostream>
using namespace std;

// int rotate_arr(int arr[],int n,int k)
// {
//     while(k--)
//     {
//         int last=arr[0];
//         for(int i=0;i<n;i++)
//         {
//             arr[i]=arr[i+1];
//         }
//         arr[n-1]=last;
//     }
// }


int rotate_arr(int arr[],int n,int k)
{   int temp[n];

    for(int i=0;i<n;i++)
    {
        temp[i]=arr[(k+i)%n];
    }

    for(int i=0;i<n;i++)
    {
        arr[i]=temp[i];
    }
}

int main()
{
    int arr[]={1,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
 
    int k=3;
    rotate_arr(arr,n,k);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}