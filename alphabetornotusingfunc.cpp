#include<iostream>
using namespace std;

void alpha(int x)
    {
        if((x>='a'&&x<='z')||(x>='A'&&x<='Z'))
           {
          cout<<"Alphabet";
           }
        else
        {
            cout<<"Not alphabet";
        }
          
    }
int main()
{
    char ch;
    cout<<"Enter anything: ";
    cin>>ch;
    alpha(ch);
    return 0;
}