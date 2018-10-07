#include<stdio.h>
void main()
{
	FILE *arj2;
    arj2=fopen("create.c","w");
	printf("file created");
	fclose(arj2);
	return 0;
		

}