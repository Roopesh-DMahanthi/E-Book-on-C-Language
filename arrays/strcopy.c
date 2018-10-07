#include<stdio.h>
#include<string.h>
main()
{
char a[15],b[15];
int i=0;
printf("enter first string \t");
gets(a);
printf("enter second string \t");
gets(b);
for(i=0;b[i]!='\0';i++)
b[i]=a[i];
printf("\ncopied string is %s from %s\n",b,a);
}
