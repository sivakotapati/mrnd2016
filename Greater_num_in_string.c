//program to find max of two numbers
#include<stdio.h>
int max_of_two(char a[],char b[]);
int  main()
{
char a[10],b[10],m;
printf("enter first number:");
gets(a);
printf("\nenter second number:");
gets(b);
puts(a);
puts(b);
m=max_of_two(a,b);
if(m==1)
	printf("\nfirst num is greater\n");
else if(m==2)
	printf("\nsecond num  is greater\n");

}
int max_of_two(char a[],char b[])
{
int i,f=0,j;
for(i=0;a[i]==0;i++);
for(j=0;b[j]==0;j++);
if(a[i]>b[j])
  {
  f=1;
  }
 else
 {
 f=2;
  }
for(;a[i]!='\0'&&b[j]!='\0';i++,j++)
{
  continue;
}
/*while(a[i]&&b[j])
{
  i++;j++;
}*/
  if(a[i]!='\0'&&b[j]=='\0')
    return 1;
  else if(a[i]=='\0'&&b[j]!='\0')
    return 2;
  else if(a[i]=='\0'&&b[j]=='\0')
  {
    if(f==1)
        return 1;
    else if(f==2)
        return 2;
  }
}
