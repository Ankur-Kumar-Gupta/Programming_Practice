#include<iostream>
using namespace std;

int main()
{
    int side1,side2,side3;
    cout<<"Enter 3 sides of the triangle: "<<endl;
    cout<<"1st Side: ";
    cin>>side1;
    cout<<"2nd Side: ";
    cin>>side2;
    cout<<"3rd Side: ";
    cin>>side3;
    if(side1==side2&&side2==side3)
      {
         cout<<"Triangle is equivalent";
      }
    else if(side1==side2||side2==side3||side1==side3)
      {
          cout<<"Triangle is isoceles";
      }  
    else
    {
        cout<<"Triangle is scalene";
    }
  return 0;    
}