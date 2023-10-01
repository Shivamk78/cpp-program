#include<iostream>
using namespace std;
int main()
{   int a,count,c,e,rem,f1=0,f2=0,temp;
    int rem1=0,rem2=0;
    
    count=0;
    cout<<"please enter a number : ";
    cin>>a; 
    temp=a;
    int a1=a;
    int a2=a;
    while (a>0)
    {
        c=a%10;
        count++;
        a=a/10;
    }
    if(count==3)
    {
        while (a1>0)
        {   
            rem1=a1%10;
            f1=f1+rem1*rem1*rem1;
            a1=a1/10;
        }
       
        if(temp==f1)
        {
            cout<<"its armstrong : ";
        }
        else
        {
            cout<<"its not armstorng : ";
        }
    }

    else if(count==4)
    {
            while(a2>0)
            {
            rem2=a2%10;
            f2=f2+rem2*rem2*rem2*rem2;
            a2=a2/10;
            }
        if(temp==f2)
        {
            cout<<"its armstrong : ";
        }else
        {
            cout<<"its not armstorng : ";
        }   
    }
    else
    {
            cout<<"wrong numcounter";
    }
       
}