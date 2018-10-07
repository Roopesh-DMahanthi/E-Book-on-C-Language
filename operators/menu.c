#include<stdio.h>
#include<conio.h>
void main() 
{
	int x;
	int c,a,b;
	printf("Enter the respective number to do that arithematic calc \n");
	printf("1 - addition\n2 - subtraction\n3 - product\n4 - quotient\n5 - reminder\n6 - even or odd\n7 - comparing two nums\n any oher number to exit\n");
	scanf("%d",&x);
	switch(x)
	{
		case 1: printf("enter 1st number ");
		        scanf("%d",&a);
		        printf("enter 2nd number ");
		        scanf("%d",&b);
		        c=a+b;
		        printf("sum= %d",c);
		        break;
		case 2: printf("enter 1st number ");
		        scanf("%d",&a);
		        printf("enter 2nd number ");
		        scanf("%d",&b);
		        c=a-b;
		        printf("difference= %d",c);
		        break;
		case 3: printf("enter 1st number ");
		        scanf("%d",&a);
		        printf("enter 2nd number ");
		        scanf("%d",&b);
		        c=a*b;
		        printf("product= %d",c);
		        break;
		case 4: printf("enter 1st number ");
		        scanf("%d",&a);
		        printf("enter 2nd number ");
		        scanf("%d",&b);
		        c=a/b;
		        printf("quotient= %d",c);
		        break;
		case 5: printf("enter 1st number ");
		        scanf("%d",&a);
		        printf("enter 2nd number ");
		        scanf("%d",&b);
		        c=a%b;
		        printf("reminder= %d",c);
		        break;
		case 6: printf("enter a number ");
		        scanf("%d",&a);
		        if(a%2==0)
		           printf("%d is even",a);
		        else
		           printf("%d is odd",a);
		        break;
		case 7: printf("enter 1st number ");
		        scanf("%d",&a);
		        printf("enter 2nd number ");
		        scanf("%d",&b);
		        if(a==b)
		           printf("both are equal");
		        else
				   printf("both are not equal");   
		        break;   
		default : printf("Exiting....");  
	}
	getch();
}
