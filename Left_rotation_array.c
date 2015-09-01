//program to rotate an array n no.of times
#include<stdio.h>
int rotate(int b[],int s,int r);
int main()
{
	int a[100],i,size,n;
	printf("enter no.of numbers:");
	scanf("%d",&size);
	if(size<=0)
	{
		printf("not possible,please enter a number >=0\n");
		return 0;
	}
	printf("\nenter %d numbers:",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter no.of rotations:");
	scanf("%d",&n);
	if(n<0) printf("not possible,please enter a positive number\n");
	else
	rotate(a,size,n);//a:array; size:size of array;n:no.of rotations
	return 0;
}
int rotate(int b[],int s,int r)
{
  //s:size of array 
  //r:no.of rotations
	int i,j,temp,k,p;
	if(r>s)
	{
      r=r%s;
	}
	for(k=0;k<r;k++)//for no.of rotations
	{ 
	  temp=b[s-1];
		for(i=s-1;i>0;i--)//from last position to first,copy previous element into current position
		{
		  b[i]=b[i-1];
	    }
		b[0]=temp;//assigning last element to first
	}
    printf("\nthe string after %d rotations:\n",r);
	for(j=0;j<s;j++)//printing string after rotations
	{
		printf("%d ",b[j]);
	}
	printf("\n");
}