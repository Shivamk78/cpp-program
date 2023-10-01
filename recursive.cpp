#include<iostream>
using namespace std;
int fab(int n)
{
    if(n==1)
    {
        return 0;
    }
    else if(n==2)
    {
        return 1;
    }
    else
    {
        return fab(n-1)+fab(n-2);
    }
}
int main()
{
     int term=8;
     for(int i=1;i<=term;i++)
     {
         cout<<fab(i)<<" ";
     }
}