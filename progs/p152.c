#include<stdio.h>
int main()
{
	int k,*p,j=0,sum=0;
	float avg;
	puts("\n HOW MANY SUBECTS MARKS TO BE ENTERED:");
	scanf("%d",&k);
	p=(int*)malloc(k*sizeof(int));
	while(j!=k)
	{
		printf("subject %d marks=",j+1);
		scanf("%d",p+j);
		j++;
	}
    j=0;
    printf("\n sum of marks:");
    while(j!=k)
    sum=*(p+j++)+sum;
    printf("%d",sum);
    avg=sum/k;
    printf("\n AVERAGE MARKS=%f:",avg);
    getche();
}