/*

Write a program to print the largest and the smallest word present in the given sentence

*/

#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
int main()
{
    char str[100] = {0}, substr[100][100] = {0}; 			//str[100] is for storing the sentence and substr[50][50] is for storing each word
	int i = 0, j = 0, k = 0, a, minIndex = 0, maxIndex = 0, max = 0, min = 0;
	char c;
	cout<<"\n \n  Enter the sentence : \t";
	gets(str);
	while(str[k]!='\0')
    	{
    	    j=0;
    	    while(str[k]!=' '&&str[k]!='\0')
    	    {
    	        substr[i][j]=str[k];
    	        k++;
    	        j++;
    	    }
    	    substr[i][j]='\0';
    	    i++;
    	    if(str[k]!='\0')
        	{
        	    k++;
        	}        
    	}	
    int len=i;
    max=strlen(substr[0]);
    min=strlen(substr[0]);
    for(i=0;i<len;i++)
    {
       a=strlen(substr[i]);
       if(a>max)
        {
            max = a;
            maxIndex = i;
        }
        if(a<min)
        {
            min=a;
            minIndex=i;
        }
    }    
  cout<<"\n \n  Largest word present in the sentence is : \t"<<substr[maxIndex];
  cout<<"\n \n  Smallest word present in the sentence is : \t"<<substr[minIndex];
  getch();
  return 0;
}

