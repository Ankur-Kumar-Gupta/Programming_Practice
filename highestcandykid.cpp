#include<iostream>
#include<climits>
using namespace std;


int main()
{
    int n,i,res=0;
    cout<<"Enter the number of kids: ";
    cin>>n;
    int arr[n];
    for(i=1;i<=n;i++)
      {
          cout<<"Enter the quantity of candies given to "<<i<<" Kid: ";
          cin>>arr[i];
      }
    int maximum=INT_MIN;
    for(i=1;i<=n;i++)
       {
            if(arr[i]>maximum)
              {
                res=i;
              }
           maximum=max(arr[i],maximum);
       }     
    cout<<"Kid with maximum candies is "<<res;
    cout<<" kid"; 
    return 0;
}