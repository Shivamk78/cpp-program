#include<iostream>
using namespace std;
class ex
{
    public:
    int a,b;
    public:
    void print(int a,int b)
    {
        cout<<a<<" "<<b;
    }
};

int main()
{
    ex e1;
    e1.a=5;
    e1.b=10;
    e1.print(e1.a,e1.b);
}