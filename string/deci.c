#include <stdio.h>
#include <string.h>
int main()
{
     char s1[20];
     int dup;
     printf("enter numeric data : \n");
     scanf("%d",&dup);
     fflush(stdin);
	 itoa(dup,s1,10);
     printf("numeric value in decimal format: %s\n", s1);
     itoa(dup,s1,2);
     printf("numeric value in binary format: %s\n", s1);
     itoa(dup,s1,16);
     printf("numeric value in hexa-decimal format: %s\n", s1);
     return 0;
}