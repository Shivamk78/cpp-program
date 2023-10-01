#include<iostream>
using namespace std;

void display(int a[])
{
    for(int i=0;i<5;i++)
        {
            cout<<a[i];
        }
}

int insertion(int a[])
{int j, i,temp;
    for( i=1;i<5;i++)
    {
        temp=a[i];
         j=i-1;
        while(j>=0 && temp<a[j])
        {
            a[j+1]=a[j];
            j--;
        }
            a[j+1]=temp;
    }

}


int main()
{
    // cout<<"djf";
   int a[5]={4,3,1,2,5};
   insertion(a);
// display(a);
    
}