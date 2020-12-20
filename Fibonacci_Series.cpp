/*

Write a program to print fibonacci series, i.e. printing a series of numbers starting 
with '0' then '1' where every next term is the sum of previous two terms.

*/

#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
	int a=0 ,b=1 ,n ,i;
	float c;
	cout<<"\n \n \t \t ******* \t FIBONACCI SERIES \t *******";
	cout<<"\n \n \n  Enter the no. of terms you want to print : \t";
	cin>>n;
	if(n)
	{
		cout<<"\n \n  The series is : \n \n "<<a<<"\t"<<b;
		for(i=2;i<n;i++)
		{
			c=a+b;
			cout<<"\t"<<c;
			a=b;
			b=c;
		}
	}
	else
	{
		cout<<"\n \n \t \t \t \t Wrong Input !!!";
	}
	getch();
	return 0;
}
