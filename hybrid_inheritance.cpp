#include<iostream>
using namespace std;
class a
{
    public:
    void a1()
    {
        cout<<"i am class A : ";
    }
};

class b:virtual public a
{
    public:
    void b1()
    {
        cout<<"i am class B : ";
    }
};

class c:virtual public a
{
    public:
    void c1()
    {
        cout<<"i am class C : ";
    }
};

class d:public b,public c 
{
    public:
    void d1()
    {
        cout<<"i am class D : ";
    }
};



int main()
{
    d obj;
    obj.a1();
    obj.b1();
    obj.c1();
    obj.d1();
}