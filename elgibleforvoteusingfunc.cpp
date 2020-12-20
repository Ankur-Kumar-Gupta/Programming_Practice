#include<iostream>
using namespace std;

void elgible(int a)
   {
       cout<<"Enter the age: ";
       cin>>a;
       if(a>18)
          {
              cout<<"Eligible";
          }
       else
       {
           cout<<"Not eligible";
       }
       
   }
int main()
{
    int age;
    elgible(age);
    return 0;
}