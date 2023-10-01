#include<iostream>
using namespace std;
int main()
{
    int flag;
    int ist_num=1;
    int last_num=100;
    int i ;
    while (ist_num<=last_num)
    {       flag=0;
            i=2;
            while (i<ist_num)
            {
                 if(ist_num%i==0)
                     {
                        flag++;
                        break;
                     }
                 i++;
            }    
        if(flag==0 && ist_num!=1)
        {
            cout<<ist_num<<" , ";
        }
    
    ist_num++; 
    
    }
 

}   
