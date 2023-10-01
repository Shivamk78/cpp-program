#include<iostream>
using namespace std;

int Rprime(int f,int l)
{
    for(int i=f;i<l;i++)
    {
    int temp=0;

        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                temp=1;
            }
        }
        if(temp==0)
        {
            cout<<i<<" ";
        }
    }
}

int main()
{
    Rprime(1,100);
}