#include<iostream>
using namespace std;
int summ(int j)
{
    int *p;
    p=&j;
    cout<<p;
    
}
int main()
{   int a=5;
    summ(a);
    return 0;
}