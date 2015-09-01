//program to find sum of digits of a number
//input:123 output:6
#include<stdio.h>
int sum_of_digits_of_num(int n);
int main()
{
 int num,p;
 printf("enter a num:");
 scanf("%d",&num);
 p=sum_of_digits_of_num(num);
 printf("\nsum of digits in %d is %d\n",num,p);
 return 0;
}
int sum_of_digits_of_num(int n)
{
	int rem,m=n,sum=0;
	while(m!=0)//calculating sum of digits from last
	{
		rem=m%10;
		sum=sum+rem;
		m=m/10;
	}
	return sum;
}
