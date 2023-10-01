#include<iostream>
using namespace std;
int main()
{
    int a=24,b=30,res;
    for (int i=1; i<a;i++)
    {
        if(a%i==0 && b%i==0)
        {
            res=i;
        }
    }
    cout<<res;

}