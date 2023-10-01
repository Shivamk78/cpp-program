#include<iostream>
using namespace std;

check_pri_amr_per(int a)
{
    
    // check prime number
   int num1=a;
    int temp=0;
    for(int i=2;i<num1;i++)
    {
        if(num1%i==0)
        {
            temp=1;
        }
    }
    if(temp==0)
    {
        cout<<"its prime num : "<<num1<<endl;
    }
    else
    {
        cout<<"its not prime"<<num1<<endl;
    }


// check armstrong number 
  int num2=a;
    int rem,res=0;
    while(num2>0)
    {
        rem=num2%10;
        res+=rem*rem*rem;
        num2=num2/10;            
    }
    if(res==a)
    {
        cout<<"its armstrong num : "<<a<<endl;
    }
    else
    {
        cout<<"its not amrtrong num : "<<a<<endl;
    }


// ckeck perfect number
     int num3=a;
     int mid=num3/2;
     int startn=1;
     int sum=0;
     while(startn<=mid)
     {
         if(num3%startn==0)
         {
             sum=sum+startn;
         }
         startn++;
     }
     if(sum==num3)
     {
         cout<<"its perfect num : "<<num3<<endl;
     }
     else
     {
          cout<<"its not perfect num : "<<num3<<endl;
     }

}
int main()
{
    int num;
    cout<<"please enter value : ";
    cin>>num;
    check_pri_amr_per(num);
}