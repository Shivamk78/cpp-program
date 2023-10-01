#include<iostream>
using namespace std;
class ex
{
    int a,b;
    public:
    void print()
    {
        a=6,b=6;
        cout<<a<<" "<<b;
    }
};

int main()
{
    ex obj;
    obj.print();

}