#include<iostream>
using namespace std;

int main()
{
    int date,pocketmoney=3000;
    for(date=1;date<=30;date++)
     {
         if(date%2==0)
           {
               continue;
           }
         cout<<"Can go outside on "<<date<<endl;  
         if(pocketmoney==0)
           {
               break;
           }  
        pocketmoney=pocketmoney-300;    
     }   
}