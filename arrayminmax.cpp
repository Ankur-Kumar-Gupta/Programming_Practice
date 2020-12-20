#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the limit fo array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: "<<endl;
    for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
    int maxno=INT_MIN;
    int minno=INT_MAX;    
    for(int i=1;i<=n;i++)
        {
            maxno=max(arr[i],maxno);
            minno=min(arr[i],minno);
        }   
    cout<<"Biggest Element of array is: "<<maxno<<endl;
    cout<<"Smallest Element of array is: "<<minno;     
    return 0;
}