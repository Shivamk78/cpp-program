#include<iostream>
using namespace std;

class a
{
    public:
    void a1()
    {
        cout<<"i am A"<<endl;
    }
};

class b
{
    public:
    void b1()
    {
        cout<<"i am B"<<endl;
    }
};

class c:public a,public b
{
    public:
    void c1()
    {
        cout<<"i am C"<<endl;
    }
};

int main()
{
    c obj;
    obj.a1();
    obj.b1();
    obj.c1();
}