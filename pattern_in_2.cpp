#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"please enter raw  : ";
    cin>>n;
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<n+1;j++)
        {
            if(i==1 || i==n || j==1 || j==n)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}