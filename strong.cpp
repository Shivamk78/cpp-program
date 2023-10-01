#include <iostream>
using namespace std;
int main(){
    int no=145,res=0;
    int rem;
    int temp=no;
    while (no>0)
    {
        rem=no%10;
        int fact=1;
        for(int i=1;i<=rem;i++){
            fact=fact*i;
        }
        res+=fact;
        no=no/10;
    }
    if(temp==res)
    {
            cout<<"its strong num : "<<temp;
    }
    else
    {
            cout<<"its not strong num : "<<temp;
    }
    
}