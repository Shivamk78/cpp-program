#include<iostream>
#include<math.h>
using namespace std;


// int  rev(int re)
// { int rem,res=0,i=0;
//     while(re>0)
//     {
//         rem=re%10;
//         res=res*10+rem;
//         re=re/10;
//     }
// }


// int  bin(int num)
// {
//     int rem,res=0;
//     while (num>0)
//     {
//         rem=num%2;
//         res=res*10+rem;
//         num=num/2;
//     }
//         cout<<res;
//     return 0;

// }
// int main()
// { 
//     int num=8;
//     bin(num);
// }

    // int a=15;
    // int a1=15;
    // int count=0;
    // int c=0;
    // int bit;
    // int bit1;
    // while(a>0)
    // {
    //      bit=a&1;
    //         if(bit==1)
    //         {
    //             count+=1;
    //         }
    //         a=a>>1;
    // }
    // while(a1>0)
    // {
    //      bit1=a1&1;
    //         if(bit1==1)
    //         {
    //             c+=1;
    //         }
    //         a1=a1>>1;
    // }
    // cout<<c+count;
    int rev(int rev)
    {
    int rem=0,res=0;
    while(rev>0)
    {
        rem=rev%10;
        res=(res*10)+rem;
        rev=rev/10;
    }
    return res;
    }
int bin(int num)
{
    int bit;
    while (num>0)
    {
        bit=num&1;
        // cout<<bit;
        num=num/2;
    }
    return rev(num);
}
int main()
{
    int a=16;
    cout<<bin(a);  
}



