/* no of character types */
# include <stdio.h>
main()
{
	char ch;
	ch=' ';
	int v,c,cap,sm,dig,sym;
	v=c=cap=sm=dig=sym=0;
	printf("ENTER x TO EXIT...\n\n");
	do
	{
		printf("ENTER ANY INPUT :");
		fflush(stdin);
		ch=getchar();
		if(ch>=65 && ch<=90)
		{
			cap++;
			if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
			    v++;
			else
			    c++;    
		}
		else
		{
			if(ch>=97 && ch<=122)
		    {
			  sm++;
			  if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
			    v++;
			  else
			    c++;    
		    }
		    else
		    {
    			if(ch>=48 && ch<=57)
    			    dig++;
    			 else
				    sym++;   
    		}
		}
	}while(ch!='x');
	printf("\nNUMBER OF CAPITAL LETTERS = %d\n",cap);
	printf("NUMBER OF SMALL LETTERS = %d\n",--sm);
	printf("NUMBER OF VOWELS = %d\n",v);
	printf("NUMBER OF CONSONANTS = %d\n",--c);
	printf("NUMBER OF DIGITS = %d\n",dig);
	printf("NUMBER OF SYMBOLS = %d\n",sym);
}
