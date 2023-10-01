#include<iostream>
using namespace std;
int main()
{
    int a=1;
    int n;

    while (n!=0)
{   cout<<"please enter value : ";
    cin>>n;
   a++;
    for (int i = 1; i < 11; i++)
    {
        cout<<a<<" X "<<i<<" = "<<a*i<<endl;
    }
   cout<<endl;
}

    

}
    
