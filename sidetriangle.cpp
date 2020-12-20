#include<iostream>
using namespace std;

int main()
{
    int n,i,j;
    cout<<"Enter any number: ";
    cin>>n;
    for(j=1;j<=i;j++)
   
      {
         for(i=1;i<=n;i++)
            {
                if(j=n-j)
                {
                cout<<" ";
                }  
                else
                {
                    cout<<"*";
                }
                
            }
           cout<<endl; 
      }
    return 0;
}