#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[],int n,int key)
{
    int s=0;
    int e=n;
    for (int i=s;i<=e;i++)
       {
           int mid=(s+e)/2;
           if(arr[mid]==key)
             {
                 return mid;
             }
           else if(arr[mid]>key)
             {
                 e=mid-1;
             } 
           else
           {
               s=mid+1;
           }
              
       }
    return -1;
}
int main()
{
    int n,key;
    cout<<"Enter limit of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<n;i++)
       {
           cin>>arr[i];
       }
    cout<<"Enter the element which you want to find: ";
    cin>>key;   
    cout<<"The position of array element in array is "<<binarysearch(arr,n,key);
    cout<<" postion.";   
    return 0;
}