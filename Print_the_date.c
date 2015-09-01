#include<stdio.h>
int valid_date(char a[]);
int print_the_date(int d,int m,int y);
int print_month(int m,int y);
int print_year(int y);
int main()
{
	char s[50];
	int v;
	printf("enter date in DD-MM-YYYY format:");
	gets(s);
	v=valid_date(s);
	if(v==-1)
	     printf("invalid date\n");
	return 0;
}
int valid_date(char a[])
{
    int i,j,k,d=0,m=0,y=0,n,leap;//d:date m:month y:year
	printf("entered date is:");
	puts(a);
	for(i=0;a[i]!='-';i++)//date
	{
		if(a[i]>='0'&&a[i]<='9')
		{
			n=a[i]-'0';//converting character to integer ex '5' to int 5
			d=d*10+n;
		}
		else return -1;
	}
	if(d<=0||d>31) return -1;
	for(j=i+1;a[j]!='-';j++)//month
	{
			if(a[j]>='0'&&a[j]<='9') 
			{
				n=a[j]-'0';//converting character to integer ex '5' to int 5
				m=m*10+n;
			}
			else
			{
				return -1;
			}
	}
	if(m<=0||m>12) return -1;
	for(k=j+1;a[k]!='\0';k++)//year
		{
			if(a[k]>='0'&&a[k]<='9') 
			{
				n=a[k]-'0';//converting character to integer ex '5' to int 5
				y=y*10+n;
			}
			else
			{
				return -1;
			}
	    }
	if(y<=0||y>9999) return -1;
	if(m==2&&d<=29) 
	{
		leap=(y%4==0)&&(y%100!=0)||(y%400==0);
		if(leap&&d>30)//if lep year it can hava 29 days in february
		{
			return -1;

		}
		else if(!leap&&d>28){     //if it is not a leap year then it can have only 28 days
				printf("%d is  not  a leap year,so it cannot have 29th day\n",y); 
				return -1;
			}
	}
	else if((m==4||m==6||m==9||m==11)&&(d<31))
	{
		printf("valid date&month\n");
	}
   else if((m==1||m==3||m==5||m==7||m==8||m==10||m==12)&&(d<=31))
   {
	 printf("valid date &month\n");
   }
   else return -1;
	print_the_date(d,m,y);
  return 1;
}
int print_the_date(int d,int m,int y)
{
    //printf("date is :%d ",d);
		if(d==10) 
			printf("Ten");
		else
		{
			switch(((d/10)%10))
			{
			case 2:printf("Twenty");
				break;
			case 3:printf("Thirty");
				break;
		    }
		}
		if(d>10&&d<20)
		{
		  switch(d)
		  {
		      case 11:printf("Eleven");
		               break;
		      case 12:printf("Twelve");
		               break;
		      case 13:printf("Thirteen");
		               break;
              case 14:printf("Fourteen");
		               break;
		      case 15:printf("Fifteen");
		               break;
		      case 16:printf("Sixteen");
		               break;
		      case 17:printf("Seventeen");
		               break;
		      case 18:printf("Eighteen");
		               break;
		      case 19:printf("Nineteen");
		               break;
		   }
		}
		else if(d>10) d=d%10;//d>20
		if(d<10)
		{
			switch(d)//printing date in words
			{
				case 1:printf("One");
					break;
               case 2:printf("Two");
					break;
			   case 3:printf("Three");
					break;
				case 4:printf("Four");
					break;
				case 5:printf("Five");
					break;
				case 6:printf("Six");
					break;
				case 7:printf("seven");
					break;
				case 8:printf("Eight");
					break;
				case 9:printf("Nine");
					break;

			}
		}
 printf("-");
 print_month(m,y);
return 0;
}
int print_month(int m,int y)
{
	switch(m)//printing month
	{
	case 1:printf("January");
		break;
	case 2:printf("February");
		break;
	case 3:printf("March");
			break;
    case 4:printf("April");
		break;
	case 5:printf("May");
		break;
	case 6:printf("June");
		break;
	case 7:printf("July");
		break;
	case 8:printf("August");
		break;
	case 9:printf("September");
     	break;
	case 10:printf("October");
		break;
	case 11:printf("November");
		break;
	case 12:printf("December");
		break;
	}//switch
	printf("-");
	print_year(y);
return 0;
}
int print_year(int y)
{
	if(y>=1000&&y<=9999)
	{
	 switch(y/1000)
	 {
		 case 1:printf("One");
					break;
         case 2:printf("Two");
					break;
   	    case 3:printf("Three");
					break;
		case 4:printf("Four");
					break;
		case 5:printf("Five");
					break;
		case 6:printf("Six");
					break;
		case 7:printf("seven");
					break;
		case 8:printf("Eight");
					break;
		case 9:printf("Nine");
					break;

	 }
	 printf(" Thousand ");
	 y=y%1000;
	} 
	if(y>=100&&y<=999)
	{
		switch(y/100)
	 {
		 case 1:printf("One");
					break;
		 case 2:printf("Two");
					break;
   	    case 3:printf("Three");
					break;
		case 4:printf("Four");
					break;
		case 5:printf("Five");
					break;
		case 6:printf("Six");
					break;
		case 7:printf("seven");
					break;
		case 8:printf("Eight");
					break;
		case 9:printf("Nine");
					break;

	 }
	 printf(" Hundred ");
	 y=y%100;
	}
	if(y>=20&&y<=99)
	{
		switch(y/10)
	 {
		 case 1:printf("One");
					break;
		 case 2:printf("Twenty");
					break;
	    case 3:printf("Thirty");
					break;
		case 4:printf("Forty");
					break;
		case 5:printf("Fifty");
					break;
		case 6:printf("Sixty");
					break;
		case 7:printf("seventy");
					break;
		case 8:printf("Eightty");
					break;
		case 9:printf("Ninty");
					break;

	 }
		y=y%10;
	 printf(" ");
	}
	if(y>=10&&y<=19)
	{
		switch(y)
	{
		case 10:printf("ten");
			break;
		     case 11:printf("Eleven");
		               break;
		      case 12:printf("Twelve");
		               break;
		      case 13:printf("Thirteen");
		               break;
              case 14:printf("Fourteen");
		               break;
		      case 15:printf("Fifteen");
		               break;
		      case 16:printf("Sixteen");
		               break;
		      case 17:printf("Seventeen");
		               break;
		      case 18:printf("Eighteen");
		               break;
		      case 19:printf("Nineteen");
		               break;
	   }
	}

	if(y<10)
	{
		switch(y)
	     {
		 case 1:printf("One");
					break;
		 case 2:printf("Two");
					break;
        case 3:printf("Three");
					break;
		case 4:printf("Four");
					break;
		case 5:printf("Five");
					break;
		case 6:printf("Six");
					break;
		case 7:printf("seven");
					break;
		case 8:printf("Eight");
					break;
		case 9:printf("Nine");
					break;

	 }
	}
	printf("\n");
	return 0;
	}