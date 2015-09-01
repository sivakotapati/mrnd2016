//program to check wether one of permutation of first string is second string
//ex:input:"silent" "listen"
#include<stdio.h>
int Is_second_permutation_of_first(char a[],char b[]);
int main()
{
	char s1[100],s2[100];
	printf("enter string1:");
	gets(s1);
	printf("enter string2:");
	gets(s2);
	Is_second_permutation_of_first(s1,s2);
	return 0;
}
int Is_second_permutation_of_first(char a[],char b[])
{
	int i,j,f=0,len1,len2;
	for(i=0;a[i]!='\0';i++)//finding length of first string
		continue;
	len1=i;
	for(j=0;b[j]!='\0';j++)//finding length of second string
		continue;
	len2=j;
	if(len1!=len2)//when string1 length!=string2 length
	{
       printf("second is not a permutation of first\n");
		return 0;
	}
	for(i=0;a[i]!='\0';i++)
	{
		for(j=0;b[j]!='\0';j++)//checking weather a character a[i] of string1 is present in string2 or not
		{
			if(a[i]==b[j])
			{
				f=1;
				break;
			}
			else f=0;
		}
		if(f==0)//if any character of string1 is not present in string2
		{
			printf("second is not a permutation of first\n");
			return f;
		}
	}
	//the function hasn't returned so far i.e., every character of string1 is present in string2
	printf("second is a permutation of firt\n");
	return 0;
}