/* average based grading*/
# include <stdio.h>
main()
{
	int m,p,c=0;
	float avg=0;
	printf("enter maths marks :");
	scanf("%d",&m);
	printf("enter physics marks :");
	scanf("%d",&p);
	printf("enter chemistry marks :");
	scanf("%d",&c);
	avg=(m+p+c)/3;
	if(avg>=60)
	      printf("congrats....you got first class");
    else
    {
	    if(avg>=50 && avg<60)
	        printf("congrats....you got second class");
	    else
		{ 
	        if(avg>=40 && avg<50)
	             printf("congrats....you got third class");
	        else
	             printf("sorry....you r failed..better luck next time");
		}
    }
	printf("\n");	    	        
}