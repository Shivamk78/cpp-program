#include<iostream>
using namespace std;
int main(){
    int i,flag;
    int total=0;
    int ist_num=1;
    int last_num=10;
    while(ist_num<=last_num){
         i=2;
         flag=0;
        while (i<ist_num)
        {
            if(ist_num%i==0){
                flag++;
                break;
            }i++;
        }if(flag==0 && ist_num!=1){
            // cout<<ist_num<<" ";
            total+=ist_num;
        }
        
        ist_num++;
        
    }
            cout<<total<<endl;
//    return 'k';
}