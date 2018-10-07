#include<stdio.h>
#include<conio.h>
void main()
{
	int adm,yr,roll;
	printf("Enter your registration number -");
	scanf("%d",&adm);
	roll=adm%100000;
	yr=adm/100000;
	printf("\nYour Registration no - %d\n",adm);
	printf("Your Birth year - %d\n",yr);
	printf("Your Roll no - %d\n",roll);
	getch();
}
