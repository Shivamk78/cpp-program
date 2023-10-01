#include<iostream>
using namespace std;

template<typename shivam>
shivam fun(shivam a,shivam b)
{
     if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
   
}

int main()
{
    cout<<fun(4.3,5.6)<<endl;
    cout<<fun(4,9);
}