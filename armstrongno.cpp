//#include<iostream>
#include<bits/stdc++.h>
//#include<cmath>
using namespace std;

int main()
{
     int rem,n,sum=0,lastdigit,original,x,temp,count=0;
     cout<<"Enter any no.";
     cin>>n;
     original=n;
    temp=n;
while(temp>0)
{
count++;
temp/=10;
}
     while(n>0)
         {
           lastdigit=n%10;
           sum+=pow(lastdigit,count);
           n=n/10;
         }
     if(sum==original)
        {
          cout<<"Armstrong";
        }
     else
     {
       cout<<"Not armstrong";
     }

     return 0;
}
