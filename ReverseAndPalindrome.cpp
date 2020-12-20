// program to print reverse ...
#include<conio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	//string str, result;
	char a[100], b[100];
	int i, j, n;
	cout<<"\n \t Enter the word : \t";
	gets(a);
	n = sizeof(a);
	cout<<"\n size of a is : "<<n;
	/*for(i=0;i<n;i++)
	{
		result[i]=msg[i];
	}*/
	for(i=(n-1),j=0;i>=0;i--,j++)
	{
		b[j]=a[i];
	}
	/*for(i=0;i<n;i++)
	{
		b[i]=a[i];
	}*/
	cout<<"\n \t Reverse is : \t";
	for(i=0;i<n;i++)
	{
		cout<<b[i];
	}
	getch();
	return 0;
}
