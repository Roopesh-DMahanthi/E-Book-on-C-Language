#include<stdio.h>
main()
{
struct std
{
	int no;
	char name[20];
	float avg;
}s[100];
int i,tar;
float test;
printf("How many students:");
scanf("%d",&tar);
for(i=0;i<tar;i++)
{
	
printf("Enter ur roll no:");
scanf("%d",&s[i].no);
printf("Enter ur name:");
scanf("%s",&s[i].name);
printf("Enter ur average:");
scanf("%f",&test);
s[i].avg=test;
}
printf("\n\nStudent details...");
for(i=0;i<tar;i++)
printf("\n\nROLL NUM-%d NAME-%s AVERAGE-%f",s[i].no,s[i].name,s[i].avg);
}
