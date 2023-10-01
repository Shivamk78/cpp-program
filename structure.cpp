#include<iostream>
using namespace std;
struct book
{
    int price;
    int id; 
    string name; 
};

void input()
{
    book b1;
    cout<<"enter book price : ";
    cin>>b1.price;
    cout<<"enter book id : ";
    cin>>b1.id;
    cout<<"enter book name : ";
    cin>>b1.name;
}

void output()
{
    book b2;
    cout<<"book price" <<b2.price<<" " <<endl;
    cout<<"id " <<b2.id<<" "<<endl;
    cout<<"book name"<<b2.name<<" "<<endl;
}

int main()
{
    input();
    output();
}