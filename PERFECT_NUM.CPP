#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    int num=6;
    int temp=num/2;
    int startnum=1;
    int flag;
    while(startnum<=temp)
    {
        if(num%startnum==0)
        {
            sum=sum+startnum;
        }
        startnum++;
    }
    if(sum==num)
    {
        cout<<"its perfect number";
    }
    else{
        cout<<"its not perect";   
    }
}
