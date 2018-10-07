#include<stdio.h>
#include<conio.h>
void main()
{
	int hrs,min,sec;
	printf("Enter time in hours format-");
	scanf("%d",&hrs);
	min=hrs*60;
	sec=hrs*3600;
	printf("total minutes=%d\n",min);
	printf("total seconds=%d\n",sec);
	getch();	
}
