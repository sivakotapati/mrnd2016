//program to find the length of a sting using pointer
//input:hello output:5
#include<stdio.h>
int string_length(char *a);
int main()
{
	char s[100];
	int n;
	printf("enter a  string:");
	gets(s);
	n=string_length(s);
	printf("\nlength of %s is %d\n",s,n);
	return 0;
}
int string_length(char *a)//length of string using pointer
{   int i,len=0;
	for(i=0;*(a+i)!='\0';i++)//claculating length of string
	{
     len++;
	}
	return len;
}