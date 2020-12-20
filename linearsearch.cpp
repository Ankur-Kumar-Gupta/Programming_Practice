#include<bits/stdc++.h>
using namespace std;

int linearsearch(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
         {
             if(arr[i]==key)
                {
                    return i;
                } 
         }  
         return -1;
}
int main()
{
    int n,key;
    cout<<"Enter the limit of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: "<<endl;
    for(int i=0;i<n;i++)
       {
           cin>>arr[i];
       }
    cout<<"Enter the element of array: ";
    cin>>key;   
    cout<<"The position of the element in the array is "<<linearsearch(arr,n,key);
    cout<<" position.";
    return 0;
}