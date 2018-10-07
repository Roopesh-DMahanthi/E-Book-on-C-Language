/* prime numbers */
# include <stdio.h>
main()
{
	int i,n,l,fac=0;
	printf("TILL WHICH NUMBER DO U WANT TO PRINT PRIME NUMBERS :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		l=1;
		fac=0;
	    while(l<=i)
	    {
	    	if(i%l==0)
	    	   fac++;
	    	l++;   
	    }
	    if(fac==2)
         printf("%d   ",i); 
	}
	printf("\n");
}