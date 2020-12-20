#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cout<<"Enter the limit of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: "<<endl;
    for( i=1;i<=n;i++)
       {
           cin>>arr[i];
       }
    int sum=0;
    for(i=1;i<=n;i++)
         {
             sum+=arr[i];
         }   
    cout<<"The sum of array elements is: "<<sum;     
    return 0;
}