#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("enter 2 numbers A and B to swapped\n");
	scanf("%d%d",&a,&b);
	b=a+b;
	a=b-a;
	b=b-a;
	printf("after swapping\n A=%d\n B=%d",a,b);
	getch();	
}
