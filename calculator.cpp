#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    char cal;
    cout<<"Hey there, which operation you want to perform: "<<endl;
    cout<<"a:Add"<<endl<<"b:Subtract"<<endl<<"c:Multiply"<<endl<<"d:Divide"<<endl;
    cout<<"Press the number key of operation: ";
    cin>>cal;
    switch (cal)
    {
        case 'a': cout<<"Enter first number:";
                  cin>>a;
                  cout<<"Enter second number:";
                  cin>>b;
                  c=a+b;
                  cout<<"The sum is ="<<c<<endl;
                  break;
        case 'b': cout<<"Enter first number:";
                  cin>>a;
                  cout<<"Enter second number:";
                  cin>>b;
                  c=a-b;
                  cout<<"The result is ="<<c<<endl;
                  break;
        case 'c': cout<<"Enter first number:";
                  cin>>a;
                  cout<<"Enter second number:";
                  cin>>b;
                  c=a*b;
                  cout<<"The result is ="<<c<<endl;
                  break;   
        case 'd': cout<<"Enter first number:";
                  cin>>a;
                  cout<<"Enter second number:";
                  cin>>b;
                  c=a/b;
                  cout<<"The result is ="<<c<<endl;
                  break;                    
        default:  cout<<"You have entered a wrong choice.Pls Enter a right choice.";
                  break;
    }
    return 0;
}