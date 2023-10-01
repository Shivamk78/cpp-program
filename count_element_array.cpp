#include<iostream>
using namespace std;
int main()
{
    int a[7]={1,1,1,2,2,3,5};
    int count;
    for(int i=0;i<7;i++)
    {
        count=0;

        for(int j=0;j<7;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
           
        }
        if(count>0)
        {
           cout<<a[i]<<" -->"<<count<<endl;
        }
    }
}