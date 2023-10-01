#include<iostream>
using namespace std;

class complex
{
    private:
    int a,b;
    public:
    void set(int x,int y)
    {
        a=x;b=y;
    }
    void showdata()
    {
        cout<<a<<b;
    }
    friend void fum(complex);
}; 
void fum(complex c)
{
    cout<<"sum is "<<c.a+c.b;
}

int main()
{
    complex c1;
    c1.set(4,5);
    fum(c1);
}