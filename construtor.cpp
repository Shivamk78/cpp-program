#include<iostream>
using namespace std;
class cls
{
    public:
    int a=4,b=6;
    // default constructor
    cls()
    {
        cout<<a+b<<endl;
    }
    // parameterized constructor
    cls(int x,int y)
    {
        cout<<x+y;
    }
};

int main()
{
    cls obj;
    cls obj1(1,4);
}