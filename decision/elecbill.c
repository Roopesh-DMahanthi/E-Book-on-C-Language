/* electricity bill*/
# include <stdio.h>
main()
{
	int pres,prev,units=0;
	float bill=0;
	printf("enter present month reading:");
	scanf("%d",&pres);
	printf("enter previous month reading:");
	scanf("%d",&prev);
	units=pres-prev;
	if(units<=100)
	{
		bill=units*0.80;
	}
	else
	{
		units=units-100;
		bill=80+(units*1.5);
	}
	printf("final bill amount= %.2f \n Thank you... \n",bill);
}
