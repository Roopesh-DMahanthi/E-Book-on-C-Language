#include<stdio.h>
int main()
{
struct sinfo
{
	char name[20];
	char roll[10];
	int age;
    float att_per;
}s1;
printf("ENTER YOUR NAME:");
gets(s1.name);
printf("ENTER THE ROLL NUM:");
gets(s1.roll);
printf("ENTER THE AGE:");
scanf("%d",&s1.age);
printf("ENTER THE ATTENDENCE PERCENTAGE::");
scanf("%f",&s1.att_per);
printf("%d IS THE SIZE OF THE POINTER",sizeof(s1));
printf("\nNAME:%s",s1.name);
printf("\nROLL NUM:%s",s1.roll);
printf("\nAGE:%d",s1.age);
 printf("\nATTENDENCE PERCENTAGE:%.2f\n",s1.att_per);
}