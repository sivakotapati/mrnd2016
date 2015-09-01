//program to check palindrime
#include<stdio.h>
int Is_palindrome(char s[]);
int main()
{
	char a[100];
	printf("enter a string:");
	gets(a);
	Is_palindrome(a);
	return 0;
}
int Is_palindrome(char s[])
{
  int len,i,j,f=0;
  for(i=0;s[i]!='\0';i++)//finding length of string
	  continue;
  len=i;
  printf("\nstring length is :%d\n",len);
  for(i=0,j=0;i<=(len/2)-1;i++,j++)//checking for palindrome
  {
	  if(s[i]==s[len-j-1])//if first ith element == last ith element
	  {
		  f=1;
	  }
	  else
	  {
		  f=0;//when first ith element not equal to last ith element then it's not a palindrome
		  break;
	  }
  }
  if(f==1) printf("%s is a palindome\n",s);
  else printf("%s is not palindrome\n",s);
}