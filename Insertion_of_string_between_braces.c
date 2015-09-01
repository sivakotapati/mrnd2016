//program to insert a string in braces
//ex1:input:"<<>>"  "hi" output:"<<hi>>"
//ex2:input:"()" "[[india]]" output:"([[india]])"
#include<stdio.h>
int Insertion_of_string_between_braces(char a[],char b[]);
int main()
{
	char s1[100],s2[100];
	printf("enter string1:");
	gets(s1);
	printf("enter string2:");
	gets(s2);
	Insertion_of_string_between_braces(s1,s2);
	return 0;
}
int Insertion_of_string_between_braces(char a[],char b[])
{
	int i,j,len1,len2,f;
	for(i=0;a[i];i++)//finding length of first string
		continue;
	len1=i;
	for(j=0;b[j];j++)//finding length of second string
		continue;
	len2=j;
	if(len1%2!=0)//string1 length is odd
	{
		printf("not posssible unequal no.of characters on both sides\n");
		return -1;  
	}
	for(i=(len1/2);i<len1;i++)//moving characters after a[len1/2] to a[len1/2+len2] 
	{
		a[i+len2]=a[i];
	}
	for(i=0;b[i];i++)//copying b[] string to a[] from a[len/2]
	{
		a[len1/2+i]=b[i];
	}
	a[len1+len2]='\0';//appending '/0' at end 
	for(i=0;a[i];i++) 
		printf("%c",a[i]);
return 0;
}