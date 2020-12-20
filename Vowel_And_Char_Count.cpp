/*

C++ Program to print total number of characters and vowels used in the sentence(s).

*/

#include<conio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i, n, count = 0;
	string str;
	cout<<"\n\n Enter the sentence : \t";
	getline(cin, str);
	n = str.length();
	for(i=0;i<=n;i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		{
			count++;
		}
	}
	cout<<"\n\n Total number of characters used is : \t"<<n;
	cout<<"\n\n Total number of vowels used is : \t"<<count;
	getch();
	return 0;
}
