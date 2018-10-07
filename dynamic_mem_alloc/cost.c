#include<stdio.h>
int main()
{
	int k=0,j=0; float sum=0.0;
	int *p;
	printf("ENTER THE NUMBER OF BOOKS YOU WANT TO PURCHASE:");
	scanf("%d",&k);
	p=(int*) calloc(k*sizeof(int),2);
	while(j!=k)
	{
		printf("Cost of the book(%d)=",j+1);
		scanf("%d",p+j);
		sum=sum+ *(p+j);
		j++;
	}
    printf("\nTOTAL COST OF THE BOOKS:");
    printf("%.2f",sum);
}