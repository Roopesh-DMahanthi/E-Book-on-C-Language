#include<stdio.h>
#include<conio.h>
main()
{
	char c,c1[20];
	printf("enter any char--inputting by getch\n");
	c=getch();
	putch(c);
	
	printf("enter any char--inputting by getche\n");
	c=getche();
	putch(c);
	
	printf("enter any string--inputting by gets\n");
	gets(c1);
	puts(c1);
}
