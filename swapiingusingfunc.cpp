#include<iostream>
using namespace std;

void swap(int x,int y)
   {
       int c=0;
       c=x;
       x=y;
       y=c;
       cout<<"Values after swapping are:-"<<endl;
       cout<<"1st number is: "<<x<<endl;
       cout<<"2nd number is: "<<y;
   }
int main()
{
    int a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    swap(a,b);
    return 0;
}