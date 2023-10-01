#include<iostream>
using namespace std;

int size_string(string name){
    int n=0;
    for(int i=0;name[i]!='\0';i++){
        n++;
    }
    return n;
}

// bool palin(string name,int n)
// {
//     int s=0;int e=n-1;
//     while(s<=e){
//         if(name[s]!=name[e]){
//             return false;
//         }else{
//             s++;
//             e--;
//         }
//     }
//     return true;
// }

bool palin(string name,int s,int e){
    if(s>e)return true;
    if(name[s]!=name[e])
        return false;
    else
        palin(name,s++,e--);
}
int main()
{   
    string name="nitin";
    int n=name.size();
    // cout<<size_string(name);
    cout<<palin(name,0,n-1);
    // if(palin(name,0,n-1)){
    //     cout<<"its palindrome";
    // }else{
    //     cout<<"its not palinfrom";
    // }


    return 0;
}