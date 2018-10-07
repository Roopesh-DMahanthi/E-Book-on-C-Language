/*elederest of the two*/
#include<stdio.h>
main()
{
	char n1[20],n2[20];
	int a1,a2=0;
	printf("enter 1st person name:");
	gets(n1);
	printf("enter 1st person age:");
	scanf("%d",&a1);
	fflush(stdin);
	printf("enter 2nd person name:");
	gets(n2);
	printf("enter 2nd person age:");
	scanf("%d",&a2);
	if(a1>a2)
        printf("%s is elder than %s",n1,n2);
	else
	    printf("%s is elder than %s",n2,n1);
	printf("\n");
}

