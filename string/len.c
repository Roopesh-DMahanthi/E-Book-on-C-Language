#include <stdio.h>
#include<conio.h>
#include <string.h>
int main()
{
     char str1[20];
     printf("Enter some text:\n");
     gets(str1);
     printf("Length of string entered : %d\n", strlen(str1));
     return 0;
}