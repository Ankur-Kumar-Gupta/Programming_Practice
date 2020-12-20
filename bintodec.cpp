#include<iostream>
using namespace std;

long int bintodec(long int n)
    {
        long int ans=0, x=1,y;
        while (n>0)
           {
              y=n%10;
              ans+=x*y;
              x*=2;
              n/=10;
           }   
        return ans;
    }
int main()
{
    long int n;
    cout<<"Enter any binary number: ";
    cin>>n;
    cout<<"The Decimal number is "<<bintodec(n);
    return 0;
}