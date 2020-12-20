#include<iostream>
using namespace std;

int fact(int x)
    {
         int facto=1,i;
         for(i=2;i<=x;i++)
         {
         facto=facto*i;
         }
         return facto;        
    }
int main()
{
    int n,c;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter r: ";
    cin>>c;
    cout<<fact(n)/(fact(c)*fact(n-c));
    return 0;
}