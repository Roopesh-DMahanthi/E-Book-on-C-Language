#include<stdio.h>
int main()
{
	int sim[5],j,n,f=0;
	printf("\nENTER FIVE INTEGERS");
	for(j=0;j<5;j++)
	scanf("%d",&sim[j]);
	printf("\n ENTER AN INTEGER FROM THE ENTERED NUMBERS FOR SEARCHING:");
	scanf("%d",&n);
	for(j=0;j<5;j++)
	{
		if(sim[j]==n)
		{
			f=1;
			printf("\n FOUND! POSITION OF THE INTEGER %d is %d",n,j+1);
		}
	}
    if(f==0)
    printf("\n ELEMENT NOT FOUND!");
}
