#include<iostream>
using namespace std;

int main()
{
    int n,temp,reverseno=0,sum=0,rem;
    cout<<"Enter any number: ";
    cin>>n;
    temp=n;
    while(temp>0)
        {
            sum+=temp%10;
            temp/=10;
        }
    temp=sum;
    while(temp>0)
        {
            rem=temp%10;
            reverseno= reverseno*10+ rem;
            temp/=10;
        }   
    if(n==sum*reverseno)
       {
           cout<<"Magic Number";
       }   
    else
    {
        cout<<"Not Magic";
    }
        
    return 0;
}