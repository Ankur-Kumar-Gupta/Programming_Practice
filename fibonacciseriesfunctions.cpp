#include<iostream>
using namespace std;

void fib(int i)
  {
      int no1=0,no2=1,n3,x;
      for(x=1;x<=i;x++)
         {
            n3=no1+no2;
            cout<<no1<<endl;
            no1=no2;
            no2=n3;
         }

  }
int main()
{
    int n;
    cout<<"Enter the number upto which you want to print: ";
    cin>>n;
    fib(n);
    return 0;
}