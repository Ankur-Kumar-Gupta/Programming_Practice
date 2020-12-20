#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    cout<<"Enter the number: ";
    cin>>n;
    for(i=1;i<=n;i++)
         {
           for(j=1;j<=n-i;j++)
               {
                 cout<<" ";
               }
           int c=1;       
           for(j=1;j<=i;j++)
               {
                 cout<<"*"<<" ";
                 c=c*(i-j)/j;
               }
           cout<<endl;
         }
    return 0;
}