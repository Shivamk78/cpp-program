#include<iostream>
using namespace std;
int main()
{
    int num,flag=0;
    cout<<"please enter number : ";
    cin>>num;
    if(num<0){
        cout<<"please enter a valid num : ";
    }
    else if(num == 2)
    {
        cout<<"its prime num "<<endl;
        // break;
    }
    else
    {
        for(int i=2;i<num;i++)
        {
            if(num%i==0){
                cout<<"its not prime num : "<<num<<endl;
                flag=1;
            }    
        }
        if(flag==0){
            cout<<"its prime num: ";
        }
        else{
            cout<< "its not a prime : ";
        }
        }
    
    
}