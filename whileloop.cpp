#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    while(n>0)
     {
         cout<<n<<" is positive"<<endl;
         cout<<"Enter Another Number: ";
         cin>>n;
     }
    return 0;
}