#include<iostream>
using namespace std;
class ex
{
   
    public: void print(int x,int y)
    {
       
        cout<<x<<" "<<y;
    }
};

int main()
{
    ex e1;
    int a=5;
    int b=10;
    e1.print(a,b);
}