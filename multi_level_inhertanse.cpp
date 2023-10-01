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

class b:public a
{
    public:
    void b1()
    {
        cout<<"i am B"<<endl;
    }
};

class c:public b
{
    public:
    void c1()
    {
        cout<<"i am from c "<<endl;
    }
};

int main()
{
    c obj;
    obj.a1();
    obj.b1();
    obj.c1();
}