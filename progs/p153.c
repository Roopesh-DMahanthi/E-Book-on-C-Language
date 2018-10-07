#include<stdio.h>
int main()
{
	int k=5,j=0; float sum=0.0;
	int *p;
	p=(int*) calloc(k*sizeof(int),2);
	printf("\n FIRST LOCATION %u",p);
	printf("\n");
	while(j!=k)
	{
		printf("Cost of the e-book(%d)=",j+1);
		scanf("%d",p+j);
		printf("(%d)LOCATION %u\n",j+1,p+j);
		sum=sum+ *(p+j);
		j++;
	}
    printf("\nTOTAL COST OF THE e-BOOKS:");
    printf("%g",sum);
    free(p);
    printf("after clearing the memory the location:%u",p);
}