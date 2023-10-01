#include <iostream>
using namespace std;
int main(){
    char a;
    int roll,clas,total, hindi,english,maths,science,sst;;
    cout<<"please enter your name";
    cin>>a;
    cout<<"please enter your roll no.";
    cin>>roll;
    cout<<"enter your class: ";
    cin>>clas;
    cout<<"please enter your subject";
    if(clas==10)
    {   
        cout<<"enter your hindi number";
        cin>>hindi;
        cout<<"enter your hindi number";
        cin>>english;
        cout<<"enter your hindi number";
        cin>>maths;
        cout<<"enter your hindi number";
        cin>>science;
        cout<<"enter your hindi number";
        cin>>sst;
        cout<<"your total marks "<<hindi+english+maths+science+sst;
        cout<<"your percentage "<<(hindi+english+maths+science+sst)/500*100;
    }
    // else(clas=12)
    // int section;
    // {   
    //     if(section=1){

    //     }
    // }

return 0;
}