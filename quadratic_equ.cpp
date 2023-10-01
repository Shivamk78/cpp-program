#include<iostream>
#include<math.h>
using namespace std;
int main(){
        int a,b,c,d,e;
        cout<<"please entre a value: ";
        cin>>a;
        cout<<"please entre b value: ";
        cin>>b;
        cout<<"please entre c value: ";
        cin>>c;
        cout
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
        d=(b*b)-4*a*c;
        cout<<d;
             e=sqrt(d);
        cout<<e<<endl;
        if(d>0){
            cout<<(-b+e)/2*a<<endl;
            cout<<(-b+e)/2*a<<endl;
        }
        else if(d<0){
            cout<<(-b+e)/2*a<<endl;
            cout<<(-b+e)/2*a<<endl;
        }
        else if(d=0){
            cout<<(-b+e)/2*a<<endl;
            cout<<(-b+e)/2*a<<endl;
        }
     return 0;  
    
}