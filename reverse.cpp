#include<iostream>
#include<math.h>
using namespace std;
int main()
{
//     int i=1,n=5;
//     int fact=1;
//    for(int i=1;i<=n;i++)
//    {
//        fact=fact*i;
//    }
//        cout<<fact<<endl;
    int re=1234;
 int rem=0,res=0;
    while(re>0)
    {
        rem=re%10;
        res=(res*10)+rem;
        re=re/10;
    }
cout<<res<<endl;
}