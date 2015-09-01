//program to find last kth element in  string
#include<stdio.h>
int last_kth_element(char s[],int k);
int main()
{
	char a[100];
	int last,len=0,i;
	printf("enter a string:");
	gets(a);
	printf("\nwhich last element you want:");
	scanf("%d",&last);
	for(i=0;a[i]!='\0';i++)//calculating length of string
		len++;
	if(last<=0||last>len) printf("\nnot possible\n");//cheching whether k lies b/w 0&&len
	else 
	last_kth_element(a,last);
	return 0;
}
int last_kth_element(char s[],int k)
{
	char *p=NULL,*q=NULL;
	int i;
	p=&s[0];q=&s[0];
	//p=&s[0]+k;
	for(i=0;i<k;i++)//moving pointer to first kth element
	{
     p++;
	}
	while(*p!='\0')//move pointers p,q till pointer p becomes '\0' then q points to last kth element
	{
		p++;
		q++;
	}
	printf("\nlast %d element is %c\n",k,*q);
	return 0;
}

