/*

Write a program that prints the numbers from '1' to 'n' where value of 'n' is given by the user 
and for multiples of '3' print "Fizz" instead of the number, for the multiples of '5' print "Buzz" 
and for the numbers which are divisible by both '3' and '5' print "Fizzbuzz"

*/

#include<conio.h>							// for getch() function
#include<iostream>							// for standard input and output
using namespace std;
void fizzbuzz()
{
	int n, i;
	cout<<"\n Enter the number (enter value greater than '1'): ";
	cin>>n;									// taking input of max value to which loop will run
	if(n)									// to check the input value
	{
		cout<<"\n The series is : \n\n";
		for(i=1;i<=n;i++)
		{
			if((i%3)==0 && (i%5)==0)
			{
				cout<<"Fizzbuzz";			// if the number is divisible by both 3 and 5 then "Fizzbuzz" will be printed
			}
			else if((i%3)==0)
			{
				cout<<"Fizz";				// if the number is divisible only by 3 and not by 5 then "Fizz" will be printed
			}
			else if((i%5)==0)
			{
				cout<<"Buzz";				// if the number is divisible only by 5 and not by 3 then "Buzz" will be printed
			}
			else
			{
				cout<<i;
			}
			cout<<"   ";
		}
	}
	else
	{
		cout<<"\n\t Wrong Input !!!";
	}
}
int main()
{
	fizzbuzz();
	getch();
	return 0;
}

