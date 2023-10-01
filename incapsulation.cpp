#include<iostream>
using namespace std;

class a
{
    private:
    int a;
    public:
    int a1(int n)
    {
        a=n;
    }
    int a2()
    {
        return a;
    }


};

int main()
{
    a obj;
    cout<<obj.a1(2)<<endl                        ;
    cout<<obj.a2();


}