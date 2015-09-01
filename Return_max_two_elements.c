//program to find max two elements
//example:input: 1 10 9 15 20 output:max=20 second max=15
#include<stdio.h>
int Return_Max_two_elements(int b[],int n,int *max,int *smax);
int main()
{    int a[100],i,size;
     int *p,*q;
	 p=NULL;q=NULL;
     printf("enter number of elements:");
	 scanf("%d",&size);
	 if(size<=0)
	 {
		 printf("not possible,please enter a number greater than 0(zero)\n");
		 return 0;
	 }
	 printf("\nenter %d elemnts:",size);
	 for(i=0;i<size;i++)
		 scanf("%d",&a[i]);
	 p=&a[0];//making first element as max
	 if(a[0]<a[1])//finding second max
	 {
	    q=p;
		p=&a[1];
	 }
	 else q=&a[1];
	 Return_Max_two_elements(a,size,p,q);//a:array; size:size of array; *p:first max; *q:second max
	 printf("max=%d \nsecond max=%d\n",*p,*q);
	 return 0;
}
int Return_Max_two_elements(int b[],int n,int *max,int *smax)
{    
	int i,t;
	for(i=2;i<n;i++)//n is size of array
	{
		if(b[i]>*smax)//finding element greater than *smax
		{
		    *smax=b[i];
			if(*smax>*max)//if *smax is greater than *max then swap
			{
				t=*max;
				*max=*smax;
				*smax=t;
			}
		}
	}
return 0;
}
