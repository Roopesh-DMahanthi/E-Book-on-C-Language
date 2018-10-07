#include<stdio.h>
main()
{
char a[15];
int i=0,length=0;
printf("enter string : ");
gets(a);
while(a[i]!='\0')
{
length++;
i++;
}
printf("length of string is %d",length);
}
