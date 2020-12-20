#include<iostream>
using namespace std;

int add(int x, int y)
  {
    int sum=x+y;
    return sum;
  }
int main()
{
  int a,b,sum;
  cout<<"Enter first no:";
  cin>>a;
  cout<<"Enter second no: ";
  cin>>b;
  cout<<"The sum is "<<add(a,b);
  return 0;
}