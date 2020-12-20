#include<iostream>
using namespace std;

void max(int a,int b,int c)
    {   if(a==b&&b==c)
           {
               cout<<"All three inputs are equal";
           }
        else if(a>b&&a>c)
           {
               cout<<"1st is maximum";
           }
        else if(b>a&&b>c)
           {
               cout<<"2nd is maximum";
           }
       else
          {
             cout<<"3rd is maximum";
          }
    }
void min(int a,int b,int c)
    {   if(a==b&&b==c)
           {
               cout<<"All three inputs are equal";
           }
        else if(c<a&&c<b)
           {
               cout<<"3rd is minimum";
           }
        else if(b<a&&b<c)
           {
               cout<<"2nd is minimum";
           }
       else
          {
             cout<<"1st is minimum";
          } 
    }
int main()
{
    int a,b,c;
    cout<<"Enter 1st Number: ";
    cin>>a;
    cout<<"Enter 2nd number: ";
    cin>>b;
    cout<<"Enter 3rd number: ";
    cin>>c;
    max(a,b,c);
    cout<<endl;
    min(a,b,c);
    return 0;
}