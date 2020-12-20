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
           for(j=1;j<=i;j++)
               {
                 if(j==1)
                    {
                      cout<<"*";
                    }
                 else
                    {
                      cout<<" ";
                    } 
               }
            for(j=2;j<=i;j++)
               {
                 if(i>=2&&i==j)
                    {
                      cout<<"*";
                    }                    
                 else
                 {
                   cout<<" ";
                 }
                   
               }   
           cout<<endl;
         }
    for(i=n;i>=1;i--)
         {
           for(j=1;j<=n-i;j++)
               {
                 cout<<" ";
               }
           for(j=1;j<=i;j++)
               {
                 if(j==1)
                    {
                      cout<<"*";
                    }
                 else
                    {
                      cout<<" ";
                    } 
               }
            for(j=2;j<=i;j++)
               {
                 if(i>=2&&i==j)
                    {
                      cout<<"*";
                    }                    
                 else
                 {
                   cout<<" ";
                 }
                   
               }   
           cout<<endl;
         }     
    return 0;
}