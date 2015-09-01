//program to find Nth_fibonocci_number
#include<stdio.h>
float Nth_fib_number(int n);
int main()
{
	int nth;
	float num;
	printf("enter which fibonocci number you want?:");
	scanf("%d",&nth);
	
	if(nth<=0)
	{
     printf("not possible,please enter a number greater than 0(zero)\n");
	}
	else
	{
		num=Nth_fib_number(nth);
	    printf("%d th fibonocci number is:%f \n",nth,num);
	}
	return 0;
}
float Nth_fib_number(int n)
{//n:nth fibonocci number
	float i,a=0,b=1,c=0;
	if(n==1) return a;//if first fibonocci number
	else if(n==2) return b;//if second fibonocci number
	else//when fibonocci number is >=3
	{
	  for(i=3;i<=n;i++)
	  {
		c=a+b;
		if(i==n)
		{
		return c;
		}
		a=b;
		b=c;
	  }
	}
	return -1;
}
