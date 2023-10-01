#include<iostream>
using namespace std;
void swipee(int *a,int *b)
{
     int c=*a;
     *a=*b;
     *b=c;
     cout<<*a<<*b;
}
int main()
{
    int a=6;
    int b=4;
    // swipee(&a,&b);

    // new method for swap
    // b=a+b-(a=b);

    // bitwise operator 
    // a=a^b;
    // b=a^b;
    // a=a^b;


    // multiplication method
    a=a*b;
    b=a/b;
    a=a/b;


    cout<<a<<b;
}

