#include<iostream>
using namespace std;

class a
{
    int a;
    int b;
    public:
    int fun(int,int);
    
};
a::fun(int x,int y)
{
    a=x;
    b=y;
    return  a+b;
}

int main()
{
    a obj;
    cout<<obj.fun(2,4);
}