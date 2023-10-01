#include<iostream>
using namespace std;

int armstrong(int n)
{
    int temp=n;
    int rem,res=0;
    while(n>0)
    {
        rem=n%10;
        res+=rem*rem*rem;
        n=n/10;
    }
    if(temp==res)
    {
        cout<<" its armstrong number : "<<temp; 
    }
    else
    {
        cout<<" its not armstrong nmuber : "<<temp;
    }
}

int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}

int strong(int n)
{
    int temp=n;
    int rem,a;
    int res=0;
    while(n>0)
    {
        rem=n%10;
        a=factorial(rem);
        res+=a;
        n=n/10;
    }
    if(temp==res)
    {
        cout<<"its strong num"<<temp;
    }
    else
    {
        cout<<"its not strong num : "<<temp;
    }

}

int main()
{
    armstrong(153);
    strong(3);
}