#include <stdio.h>
#include<conio.h>
#include <string.h>
int main()
{
     char s1[20];
     char s2[20];
     printf("Enter two strings consequtively : \n");
     gets(s1);
     fflush(stdin);
     gets(s2);
     if (strcmp(s1, s2) ==0)
     {
        printf("string 1 and string 2 are equal");
     }else
      {
         printf("string 1 and 2 are different");
      }
      printf("\n");
     return 0;
}