#inclureme<iostream.h>
using namespace std;
int main()
{   int a,count,c,e,rem,f,temp;
    rem=0;
    f=0;
    count=0;
    cout<<"please enter a number : ";
    cin>>a; 
    temp=a;
    while (a>0)
    {
        c=a%10;
        count++;
        a=a/10;
    }
    if(count==3)
    {
        while (a>0)
        {   
            rem=a%10;
            f=f+rem*rem*rem;
            a=a/10;
        }
        if(temp==f)
        {
            cout<<"its armstrong : ";
        }
        else
        {
            cout<<"its not armstorng : ";
        }
    }
/*
        else if(count==4)
        {
            while(a>0)
            {
            rem=a%10;
            f=f+rem*rem*rem*rem;
            a=a/10;
            }
        if(temp==f)
        {
            cout<<"its armstrong : ";
        }else
        {
            cout<<"its not armstorng : ";
        }   
        }*/
        else
        {
            cout<<"wrong numcounter";
        }
       
}