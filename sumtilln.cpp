#include<iostream>
using namespace std;

int sum(int a)
{
    int tsum=0;
    for(int i=1;i<=a;i++)
      {
          tsum+=i;
      }
    return tsum;  
}
int main()
{
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    cout<<sum(n);
    return 0;
}