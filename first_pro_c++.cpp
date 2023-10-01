// // #include<iostream>
// // using namespace std;
// // int main(){
// //     char ch;
// //     cout<<"please enter char ";
// //     cin>>ch;
// //     if(ch=='a' || ch=='e' ||  ch=='i' || ch=='o' || ch=='u'){
// //         cout<<"you enter vowels";
// //     }
// //     else{
// //         cout<<"you enter consonants";
// //     }
// // }

// #include<iostream>
// #include"number_count.h"
// using namespace std;
// int main()
// {
//     int num=5,rem=0,ans=0,i=1;
//     cout<<"question is "<<num<<endl;
//     while(num!=0){
//         rem=num%2;
//         ans=rem*i+ans;
//         i*=10;
//         num=num/2;
//     }
//     cout<<"the binary is "<<ans<<endl;

//     int temp=ans; 
    
//     int res=0;
//     i=1;
//     while(temp!=0){
//         int digit=temp%10;
//         if(digit!=0){
//             res+=0;
//         }else{
//             res+=1*i;
//         }
//         i*=10;
//     temp/=10;
//     }
//     cout<<"the answer is "<<res;
// }



#include<iostream>
using namespace std;
int main(){
    int num=5;
    int temp=num;
    int mask=0;
    while(temp!=0){
        mask=mask<<1|1;
        temp=temp>>1;
    }
    int ans=(~num)&mask;
    cout<<ans;
    return 0;
}