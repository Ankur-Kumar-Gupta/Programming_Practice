#include<iostream>
using namespace std;
int main()
{
    int i, j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if((j<=i))
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        for(j=0;j<5;j++)
        {
            if((j+i)>=4)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<"\n";
    }
    for(i=0;i<5;i++)
    {
        for(j=4;j>=0;j--)
        {
            if(j>=i)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        for(j=0;j<=4;j++)
        {
            if(j>=i)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<"\n";
    }
    return 0;
}