 #include <stdio.h>
 #include<conio.h>
 #include <string.h>
 void main()
 {
    char penType[20];
    printf("Enter a pen name\n");
    gets(penType);
    char penText[20];
    strncpy(penText, penType,3);
    penText[3]='\0';
    printf("Copied 1st 3 chars to another string\n%s\n\n",penText);
 }