/* counting even and odd numbers till 0 is inputted */
# include <stdio.h>
main()
{
	int n,eve,odd;
	n=eve=odd=0;
	do
	{
		printf("ENTER A NUMBER :");
		scanf("%d",&n);
		if(n%2==0)
		   eve++;
		else
		   odd++;   
	}while(n!=0);
	printf("NUMBER OF EVEN NUMBERS ENTERED= %d\n",--eve);
	printf("NUMBER OF ODD NUMBERS ENTERED= %d\n",odd);
}
