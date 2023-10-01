#include<stdio.h>

void fun()
{
    printf("this is function ");
}

int main()
{
    // printf("hello");
    void (*p)()=&fun();
    (*p)();
    return 0;
}