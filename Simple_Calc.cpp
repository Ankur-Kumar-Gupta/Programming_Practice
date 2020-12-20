#include<iostream>
#include<math.h>
using namespace std;
int input()
{
	int c;
	cout<<"\n Choose the operation you want to perform :";
	cout<<"\n 1. Add \t 2. Subtract \n 3. Multiply \t 4. Divide \n 5. Percent \t 6. Square Root \n 7. Exponential \t 0. Exit \n";
	cout<<"\n Option : \t";
	cin>>c;
	return c;
}
int add()
{
	int a, b, r;
	cout<<"\n Enter first number : \t";
	cin>>a;
	cout<<"\n Enter second number : \t";
	cin>>b;
	r=a+b;
	cout<<"\n The sum is : \t"<<r;
	return 0;
}
int sub()
{
	int a, b, r;
	cout<<"\n Enter first number : \t";
	cin>>a;
	cout<<"\n Enter second number : \t";
	cin>>b;
	r=a-b;
	cout<<"\n The subtraction is : \t"<<r;
	return 0;
}
int multiply()
{
	int a, b, r;
	cout<<"\n Enter first number : \t";
	cin>>a;
	cout<<"\n Enter second number : \t";
	cin>>b;
	r=a*b;
	cout<<"\n The multipication is : \t"<<r;
	return 0;
}
int divide()
{
	int a, b, r;
	cout<<"\n Enter the dividant : \t";
	cin>>a;
	cout<<"\n Enter the divisor : \t";
	cin>>b;
	r=a/b;
	cout<<"\n The quotient is : \t"<<r;
	return 0;
}
int percent()
{
	int a, b, r;
	cout<<"\n Enter the amount : \t";
	cin>>a;
	cout<<"\n Enter how much % of the amount you want : \t";
	cin>>b;
	r=(a*b)/100;
	cout<<"\n The percentage is : \t"<<r;
	return 0;
}
int root()
{
	int a, r;
	cout<<"\n Enter the number : \t";
	cin>>a;
	r=sqrt(a);
	cout<<"\n The root is : \t"<<r;
	return 0;
}
int power()
{
	int a, b, r;
	cout<<"\n Enter the base number : \t";
	cin>>a;
	cout<<"\n Enter the exponent : \t";
	cin>>b;
	r=pow(a,b);
	cout<<"\n The result is : \t"<<r;
	return 0;
}
int result(int c)
{
	switch(c)
	{
		case 1:
			add();break;
		case 2:
			sub();break;
		case 3:
			multiply();break;
		case 4:
			divide();break;
		case 5:
			percent();break;
		case 6:
			root();break;
		case 7:
			power();break;
		case 0:
			cout<<"\n THANK YOU !!!";break;
		default:
			cout<<"\n Enter a correct option ...";break;
	}
}
int main()
{
	int c;
	cout<<"\n \t ***** CALCULATOR ***** ";
	repeat:
	c=input();
	result(c);
	if(c!=0)
	{
		goto repeat;
	}
	return 0;
}

