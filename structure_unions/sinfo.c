#include<stdio.h>
void main()
{
	struct s_info
	{
		char name[25];
		char roll[10];
		int age;
		float att_per;
	}s2[3];
	int i;
	for(i=0;i<3;i++)
	{
		fflush(stdin);
	printf("Enter name : ");
	gets(s2[i].name);
	fflush(stdin);
	printf("Enter roll no : ");
	gets(s2[i].roll);
	printf("Enter age : ");
	scanf("%d",&s2[i].age);
	printf("Enter attendance percentage : ");
	scanf("%f",&s2[i].att_per);
	}
	
	for(i=0;i<3;i++)
	{
	printf("\nname : %s",s2[i].name);
	printf("\nroll no : %s",s2[i].roll);
	printf("\nage : %d",s2[i].age);
	printf("\nattendance percentage : %.2f\n",s2[i].att_per);
	}
	/*
	struct s_info s1={"Roop","A17",18,95.6};
	printf("\nSize of the structure - %d",sizeof(s1));
	printf("\nname : %s",s1.name);
	printf("\nroll no : %s",s1.roll);
	printf("\nage : %d",s1.age);
	printf("\nattendance percentage : %.2f\n",s1.att_per);*/
}
