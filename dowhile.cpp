#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    cout<<"You can enter any number till you enter a negative number."<<endl;
    do
    {
       cout<<"You Have entered "<<n<<endl;
       cout<<"Enter another number : ";
       cin>>n;  
    }while(n>0);
  
   return 0; 
}