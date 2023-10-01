
#include<iostream>         
using namespace std;
class a
{
    // int *vptr;
    public:
    virtual void a1()
    {
        cout<<"i am class A";
    }
    void f()
    {
        cout<<"\nhello";
    }
};

class b : public a
{
    public:
    void a1()
    {
        cout<<"i am class B";
    }
};

int main()
{
    a *p;
    b obj;
    p=&obj;
    p->a1();
}