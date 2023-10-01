#include <iostream>
using namespace std;
int main()
{
    // int a,b,c;
    // cout<<"please enter  a : ";
    // cin>>a;
    // cout<<"please enter  b : ";
    // cin>>b;
    // cout<<"please enter  c : ";
    // cin>>c;
    // if(a>b&&a>c)
    // {
    //     cout<<"a is greater "<<a;
    // }
    // else if(b>a&&b>c)
    // {
    //     cout<<"b is grater"<<b;
    // }
    // else{
    //     cout<<"c is greater "<<c;
    //     }
    char ch;
    cout<<"please enter any character,numner,symbol";
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<"you enter character ";
    }
    else if(ch>='0' && ch<='9'){
        cout<<"you are number";
    }
    else{
        cout<<"you are symbol";
    }



}



