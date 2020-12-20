#include<iostream>
using namespace std;

void oddeven(int x)
     {
         if(x%2==0)
            {
          cout<<"Number is even.";
            }
         else
         {
             cout<<"Number is odd.";
         }
          
     }
int main()
{
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    oddeven(n);
    return 0;
}