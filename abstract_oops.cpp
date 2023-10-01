#include<iostream>
using namespace std;

class a
{
    public:
    virtual void a1()=0;
};

class b:public a
{
    public:
    void a1()
    {
        cout<<" i am class B ";
    }
};

int main()
{
    b obj;
    obj.a1();
}