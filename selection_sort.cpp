#include<iostream>
#include"printarray.h"
using namespace std;

int selection(int arr[])
{
    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
    }
}


int main()
{   int arr[5]={4,3,5,1,2};
    selection(arr);
    printarray(arr);
}