/* calculator using switch case*/
# include <stdio.h>
main()
{
	int a,b=0;
	float c=0;
	char ch;
	printf("~~~~~~~~~~CALCULATOR~~~~~~~~~~\n");
	printf("To ADD enter---> + \nTo SUBTRACT enter---> - \nTo MULTIPLY enter---> * \nFor QUOTIENT enter---> / \nFor REMAINDER enter---> %% \nEnter your option:");
	scanf("%c",&ch);
	printf("enter 1st number:");
	scanf("%d",&a);
	printf("enter 2nd number:");
	scanf("%d",&b);
	switch(ch)
	{
		case '+' : c=a+b;break;
		case '-' : c=a-b;break;
		case '*' : c=a*b;break;
		case '/' : c=a/b;break;
		case '%' : c=a%b;break;
		default : printf("invalid calculation type....");
	}
	printf("\n\tRESULT=%.2f\n",c);
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\tThank you......\n");
}
