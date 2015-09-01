//program fix two misplaced numbers in coreect place
//example:input:1 5 3 4 2 6 output:1 2 3 4 5 6
#include<stdio.h>
int fix_misplaced_elements(int b[],int n);
int main()
{
 int a[10],size,i;
 printf("enter size of array:");
 scanf("%d",&size);
 if(size<=0)
	 {
		 printf("not possible,please enter a number greater than 0(zero)\n");
		 return 0;
	 }
 printf("\nenter %d elements in ascending order with two numbers misplaced:",size);
 for(i=0;i<size;i++)
 scanf("%d",&a[i]);
 fix_misplaced_elements(a,size);
 return 0;
}
int fix_misplaced_elements(int b[],int n)
{   int i,j,k,m,t;
    for(i=0;i<n;i++)
    {
        if(b[i]>b[i+1])
        {
            m=i;
            break;
        }
    }
    for(j=i+2;j<n;j++)
    {
     if(b[j]<=b[m]&&b[j]<=b[m+1])
      {
        break;
      }
    }
         
    if(j!=n)
    {
     t=b[i];
     b[i]=b[j];
     b[j]=t;
    }
    else//if consecutive elements
    {
     t=b[m+1];
     b[m+1]=b[m];
     b[m]=t;
    }
    printf("\nafter correcting the misplaced numbers:");
    for(k=0;k<n;k++)
    {
        printf("%d ",b[k]);
    }
	printf("\n");
return 0;
    
}

