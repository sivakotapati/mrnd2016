//program to print 2-tuples of array whose sum is equal to N without repetitions 
#include<stdio.h>
int tuples_of_sum(int a[],int s,int n); 
int quicksort(int x[],int fisrt,int last);
int main()
{
	int arr[100],size,i,sum;
	printf("enter no.of elements :");
	scanf("%d",&size);
	if(size<=0){
		printf("not possible,please enter a positive number\n");
	return 0;
	}
	printf("enter %d elements:",size);
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	printf("enter which sum u want:");
	scanf("%d",&sum);
	quicksort(arr,0,size-1);
	tuples_of_sum(arr,size,sum);
	return 0;
}
int quicksort(int x[10],int first,int last){
    int pivot,j,temp,i;

     if(first<last){
         pivot=first;
         i=first;
         j=last;

         while(i<j){
             while(x[i]<=x[pivot]&&i<last)
                 i++;
             while(x[j]>x[pivot])
                 j--;
             if(i<j){
                 temp=x[i];
                  x[i]=x[j];
                  x[j]=temp;
             }
         }

         temp=x[pivot];
         x[pivot]=x[j];
         x[j]=temp;
         quicksort(x,first,j-1);
         quicksort(x,j+1,last);

    }
	 return 0;
}

int tuples_of_sum(int a[],int s,int n)
{
	int i,j,k;
	printf("tuples are:\n");
	for(i=0;i<s;i++)
	{
		if(a[i]==n)//if a[i]==required sum
		{
			printf("%d\n",a[i]);
		}
		else
		{
		  for(j=i+1;j<s;j++)//checking for two tuples
		   {
			if((a[i]+a[j])==n)
			{
				printf("%d %d\n",a[i],a[j]);
				break;
			}
		 }
		}
		for(k=i;k<s;k++){
			if(a[i]!=a[k])
				break;
		}
		i=k-1;
	}
	return 0;
}
