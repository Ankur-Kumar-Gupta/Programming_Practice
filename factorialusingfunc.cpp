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
    int n;
    cout<<"Enter any no: ";
    cin>>n;
    cout<<fact(n);
    return 0;
}