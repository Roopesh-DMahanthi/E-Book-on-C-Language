#include<stdio.h>
main()
{
struct std
{
	int rollno;
	char name[20];
	float avg;	
}a;
FILE *fp;
char ch='y';
fp=fopen("student.dat","ab");
while(ch=='y')
{
printf("\nenter roll no:");
scanf("%d",&a.rollno);
	
printf("\nenter name:");
scanf("%d",&a.name);
	
printf("\nenter average:");
fflush(stdin);
scanf("%d",&a.avg);

fwrite(&a,sizeof(a),1,fp);

printf("\ncontinue:");
fflush(stdin);

ch=getche();
}
}
