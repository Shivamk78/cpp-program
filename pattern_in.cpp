#include<iostream>
using namespace std;
int main(){
    char ch='A';
    char n;
    cout<<"please enter character  : ";
    cin>>n;
    for( int i=1;i<n-63;i++)
    {
        for( int j=1;j<=i;j++)
        {
            cout<<ch;   
        }
            ch++;
        cout<<endl;
    }
}