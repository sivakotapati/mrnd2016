//program to check a number is divisible by 11 or not
#include<stdio.h>
int number_divisible_by_11(int  num);
int main()
{   int n;
	printf("enter a number:");
	scanf("%d",&n);
	if(n<0)//if n is divisible by 11 then -n is also divisible by 11
		n=-n;//so make -ve number as +ve number because
	         //-a%b can give +ve or -ve value depending on machine which becomes 
	         //problem in counting  even positions sum sum&odd positions sum
	 number_divisible_by_11(n);
	return 0;
}
int number_divisible_by_11(int num)
{
	int esum=0,osum=0,rem,a[100],diff,i=0,j;
	int n=num;
	while(n!=0)
	{
	rem=n%10;
	a[i]=rem;
	n=n/10;
	i++;
	}
	for(j=0;j<=i-1;j++)//finding sum of even&odd positions in number
	{
		if((j%2)==0) osum=osum+a[j];
		else esum=esum+a[j];
	}
	
	diff=esum-osum;
	printf("\nesum=%d osum=%d diff=%d",esum,osum,diff);
	if(diff<0) 
		diff=-diff;
	if(diff==0||diff==11)//a number is divible by 11 when its sum of even positions-sum of odd positions is 0 or 11
	{
		printf("\nNumber is divisible by 11\n");
	    return 0;
	}
	   
	else if(diff<11)
	{
		printf("\nNumber is not divisible by 11\n");
		return 0;
	}
	else
	{ 
		number_divisible_by_11(diff);//recursively calling the function if diff>11
	}
return 0;
}