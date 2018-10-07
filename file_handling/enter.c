#include<stdio.h>
main()
{
	FILE *fp;
	char name[10];
	char ch;
	printf("enter a file name:");
	scanf("%s",&name);
	fp=fopen(name,"rt");
	if(fp=='\0')
	{
		printf("file is not existing");
		exit(0);
		
	}
	while(1)
	{
		ch=getc(fp);
		printf("%c",ch);
		if(ch==EOF)
		break;
	}
}

