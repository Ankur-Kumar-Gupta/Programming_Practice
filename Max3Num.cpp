#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter 3 Numbers: ";
    cin>>a>>b>>c;
    if(a>b)
       {
          if(a>c)
             cout<<a<<" is greatest of all of them";
          else
             cout<<c<<" is greatest";               
       }
    else
       {
          if(b>c)
             cout<<b<<" is greatest";
          else      
             cout<<c<<" is greatest";
       }
    return 0;
}