#include<iostream>
using namespace std;

int main()
{
    int n,i,j;
    cout<<"Enter any number: ";
    cin>>n;
    for(i=n;i>=1;i--)
      {
          for(j=1;j<=i;j++)
            {
                cout<<j;
            }
          cout<<endl;
      }
    return 0;
}    