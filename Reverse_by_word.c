//program to reverse a sentence by words
//ex:input:i love india output:india love i
#include<stdio.h>
#include<string.h>
int reverse(char a[]);
int reverse_word(char a[],int i,int j);
int main()
{
	char s[100];
	printf("enter a string:");
	gets(s);
	reverse(s);
    return 0;
}
int reverse(char a[])
{ 
	int i,j,k,s=0,e=0,len=0;
	char t;
	for(i=0;a[i]!='\0';i++)//finding length of string
		continue;
	len=i;
	for(i=0;i<len/2;i++)//reversing string
	{
		t=a[i];
		a[i]=a[len-i-1];
		a[len-i-1]=t;
	}
	//printf("%s\n",a); reverse of original string
	s=0;
	for(j=0;a[j];j++)
	{
		if(a[j+1]==' '||a[j+1]=='\0')
		{
		   e=j;
		   reverse_word(a,s,e);//s:starting position of word e:ending position of word
		   s=e+2;
		}
	}
	printf("the given string after reversing by word is:\n");
	printf("\n%s\n",a);
return 0;
}

int reverse_word(char a[],int i,int j)
{//i:starting index of word j:ending index of word
	int t;
    for(;i<j;i++,j--)//reversing a word
     {
	   t=a[i];
	   a[i]=a[j];
       a[j]=t;
	}
		  return 0;
}