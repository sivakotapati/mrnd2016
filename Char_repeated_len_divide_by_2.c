//program to print a character that is repeated len/2 times in a string
#include<stdio.h>
char char_repeated_len_divide_by_2(char a[]);
int main()
{
	char s[100],c;
	printf("enter a string:");
	gets(s);
	c=char_repeated_len_divide_by_2(s);
	if(c=='-1') 
		printf("No character is repeated len/2 times");
	else 
		printf("%c is repeated len/2 times",c);
	return 0;
}
char char_repeated_len_divide_by_2(char a[])
{	
	int i,j,len,count=0;
	for(i=0;a[i];i++)//finding length of string
		continue;
	len=i;
	for(i=0;a[i];i++)
	{
		for(j=i;a[j];j++)//checking how many times a[i] character is repeated
			if(a[i]==a[j])
				count++;
		if(count>len/2) //cheching whether a character is repeated more than n/2 times or not
			return a[i];
	}

return '-1';
}