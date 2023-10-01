#include<iostream>
using namespace std;
int main()
{
    int ans=0;
    int num=8;
    int rem;
    while(num>0){


     rem=num%2;
     ans=rem+ans*10;
        num=num/2;
    }
        cout<<ans;       
}