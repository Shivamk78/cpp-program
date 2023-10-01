#include<iostream>
using namespace std;

class a
{
    public:
    void a1()
    {
        cout<<"i am from a class "<<endl;
    }
};

class b: public a
{
    public:
        void b1()
        {
            cout<<"i am from class b";
        }
};
int main()
{
    b obj;
    obj.a1();
    obj.b1();
}