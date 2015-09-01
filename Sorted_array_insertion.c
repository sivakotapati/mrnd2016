//program to insert a number at particular position in an sorted aray
//example:input:{1,4,7,9},8 output:1 4 7 8 9
#include<stdio.h>
int sorted_array_insertion(int b[],int size,int num);
int main()
{
	int a[100],size,i,n;
	printf("enter no.of elements in array:");
	scanf("%d",&size);
	if(size<=0) 
		{
			printf("not possible,please enter a size>0\n");
			return 0;
     	}
	printf("\nenter %d numbers in sorted order:",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nenter num to be inserted:");
	scanf("%d",&n);
	sorted_array_insertion(a,size,n);//a:array,size:size of array,n:num to be inserted in array
	return 0;
}
int sorted_array_insertion(int b[],int size,int num)
	{ //size:array size; num:num to be inserted
		int i,j;
		if(num>=b[size-1]) //if num >=last element insert at end of array
		{
		    b[size]=num;
		}
		else if(num<=b[0])//if num<=initial value insert at zeroth position
		{
			for(i=size;i>0;i--)//moving array elements to next position
			{
				b[i]=b[i-1];
			}
			b[0]=num;
		}
		else//if num is in between initial and last value
		{

          for(i=0;i<size;i++)
		   {
			   if(num<=b[i+1]) 
			  {
				for(j=size;j>=i+1;j--)//moving array elements to next positions i.e. from i-1 to i position
				  {
					 b[j]=b[j-1];
				  }//inner for loop
				  b[i+1]=num;//inserting num at correct position
			      break;
			  }//inner if
		  }//outer for
		}//else
	  printf("\narray after inserting %d is:\n",num);
	  for(i=0;i<=size;i++)
		  printf("%d ",b[i]);
	  return 0;
	}