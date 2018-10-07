/* table program */
# include <stdio.h>
main()
{
	int t,end,i;
	t=end=i=0;
	printf("WHICH TABLE DO YOU WANT :");
	scanf("%d",&t);
	printf("TILL WHICH MULTIPLE DO YOU WANT :");
	scanf("%d",&end);
	printf("\n\tTABLE\n\n");
	for(i=1;i<=end;i++)
	{
		printf("\t%d * %d = %d\n",t,i,t*i);
	}
}
