#include<iostream>
using namespace std;

void out_fun(){
        
            // void in_fun(){
            //     cout<<"inner function";
            // }
        
    cout<<"out_function";
}

int  main()
{

    void (*p)();
    p=out_fun();
    (p)();
    // int i,n1,n2;
    // cout<<"please enter number ist : ";
    // cin>>n1;
    // cout<<"please enter number 2nd : ";
    // cin>>n2;
    // i=n1;
    // while (n1*n2>=i)
    // {
    //     if(
        
        
    //         cout<<i;
    //         break;
    //     }i++;
    // }
    
    
}