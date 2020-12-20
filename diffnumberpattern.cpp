#include<iostream>
using namespace std;

int main()
{
    int i,j,c=1,n;
    cout<<"Enter any number: ";
    cin>>n;
   for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
              {
                      cout<<c;
                      c=c+4;
              }
            cout<<endl;
        }
    return 0;
}