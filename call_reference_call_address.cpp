#include<iostream>
using namespace std;

void ref(int a)
{
    cout<<a;
    a++;
    
}

int main()
{
    int b=6;
    ref(b);
    cout<<b;








// reference variable
    // int a=5;
    // int &b=a;
    // // cout<<a;
    // ++a;
    // ++b;
    // cout<<a
// pointer

// int *ptr;
// int a=5;
// ptr=&a;
// cout<<*ptr;

}
