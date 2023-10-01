#include<iostream>
using namespace std;
void first(int ,int );
int main()
{
    int x=5;
    char y[20];
    cout<<"enter name";
    cin>>y;   
    cout<<"name = "<<y;
    first(x,98);
    return 0;
}
void first(int x,int y)
{
    cout<<x<<"\n"<<y;
}