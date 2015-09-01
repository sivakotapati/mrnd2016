//program to find common characters in two strings without duplicates
//ex:input:"chandana" "sampath" output:a,h
#include<stdio.h>
int common_chars(char a[],char b[]);
int main()
{
	char s1[100],s2[100];
	printf("enter string1:");
	gets(s1);
	printf("enter string2:");
	gets(s2);
	common_chars(s1,s2);
return 0;
}
int common_chars(char a[],char b[])
{
	//function to print common characters in two strings
	//assuming we have only lower case leters
	int i,j,c[26];//array c is used for mainting bit 1 if a char is common in both strings 
	for(i=0;a[i];i++)
	{
		for(j=0;b[j];j++)
		{
			if(a[i]==b[j])//checking coomon character
			{
				c[a[i]-'a']=1;
				break;
			}
		}
	}
	printf("common characters are:");
   for(i=0;i<26;i++)
   {
	if(c[i]==1) printf("%c ",'a'+i);
   }
return 0;
}

