#include<iostream>
using namespace std;

int main()
{
     int n,i,j,c=1;
     cout<<"Enter any number: ";
     cin>>n;
     for(i=1;i<=n;i++)
         {
             for(j=1;j<=n-i;j++) 
                  {
                     cout<<" ";                      
                  }   
             for(j=i;j>=1;j--)
                  {
                      cout<<j;
                  } 
             for(j=2;j<=i;j++)
                  {

                      if(i>=2)
                         {
                             cout<<j;
                         }
                  }     
             cout<<endl;
         }
     return 0; 
}