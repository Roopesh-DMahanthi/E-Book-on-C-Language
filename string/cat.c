#include <stdio.h>
#include <string.h>
int main()
{
     char s1[20];
     char s2[10];
     printf("enter 2 strings consequtively : \n");
     gets(s1);
     fflush(stdin);
     gets(s2);
     strcat(s1,s2);
     printf("Output string after concatenation: %s\n", s1);
     return 0;
}