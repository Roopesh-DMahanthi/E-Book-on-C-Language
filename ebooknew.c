#include<stdio.h>
#include<conio.h>
#include<windows.h>
FILE *fp,*pp;
char c;
int p;
int n;
int t=0;
int fx=0;
int print();
int user();
void basic();
void cdec();
void operexp();
void ioc();
void deci();
void loop();
void array();
void strings();
void pointers();
void func();
void storclass();
void prep();
void strucunion();
void files();
void graphics();
void dyanalloc();
void editor();
void disp();
struct users
{
	char name[15];
	char newna[15];
	int no;
}u;
void disp()
{
	while(!feof(fp))
	{
		c=fgetc(fp);
		Sleep(1);
		printf("%c",c);
	}
}
int user()
{
	char tp[101],str1[10],str2[10],str3[10];
	int l;
	if(t>0)
		goto skip;
	printf("\t\t\t\t\t\t\t\t\tEnter your ID no : ");
	scanf("%d",&u.no);
	fp=fopen("users.txt","r+");
	while((fgets(tp,100,fp))!=NULL)
	{
		fscanf(fp,"%s%s%s%d",str1,str2,str3,&l);
		if(l==u.no)
		{
			skip:
				fscanf(fp,"%s%s%s",str1,str2,u.newna);
		printf("\n\t\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		printf("\t\t\t\t\t\t\t\t\t\t\t%s\n",u.newna);
		printf("\t\t\t\t\t\t\t\t\t     WELCOME BACK TO E-BOOK ON C LANGUAGE\n");
		printf("\t\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		return 0;
		}
	}
	fflush(stdin);
	printf("\n\t\t\t\t\t\t\t\t\tEnter your Name : ");
	gets(u.name);
	u.newna[0]='M';
	u.newna[2]='.';
	u.newna[3]='\0';
	l=strlen(u.name);
	if(u.name[l-1]=='a' || u.name[l-1]=='i')
		u.newna[1]='s';
	else
		u.newna[1]='r';
	strcat(u.newna,u.name);

	fseek(fp,0,SEEK_END);
	fprintf(fp,"ID no - %d\nName - %s\n\n",u.no,u.newna);
	fclose(fp);
	printf("\n\t\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("\t\t\t\t\t\t\t\t\t\t\t%s\n",u.newna);
	printf("\t\t\t\t\t\t\t\t\t\tWELCOME TO WORKBOOK ON C LANGUAGE\n");
	printf("\t\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}
void main()
{
	HWND consoleWindow = GetConsoleWindow();
	ShowWindow(consoleWindow,SW_MAXIMIZE);
	while(fx==0)
	{
		fp=fopen("intro.txt","r");
		disp();
		user();
		int choice;
		printf("\t\t\t\t\t\t\t\t\tWant to Change Editor Colors (yes-anykey/no-n) : ");
		char shift;
		shift=getche();
		if(shift != 'n')
		{
 			editor();
 			printf("\t\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		}
		printf("\n\n\t\t\t\t\t\t\t\t\t\t\tList of Topics\n\n");
		printf("\t\t\t\t\t\t\t\t\t\t1 - Basic Introduction on C\n\t\t\t\t\t\t\t\t\t\t2 - The C Declarations\n");
		printf("\t\t\t\t\t\t\t\t\t\t3 - Operators & Expressions\n\t\t\t\t\t\t\t\t\t\t4 - Input & Output in C\n");
		printf("\t\t\t\t\t\t\t\t\t\t5 - Decision Statements\n\t\t\t\t\t\t\t\t\t\t6 - Loop Control\n");
		printf("\t\t\t\t\t\t\t\t\t\t7 - Data Structures -> Array\n\t\t\t\t\t\t\t\t\t\t8 - Strings & Standard Functions\n");
		printf("\t\t\t\t\t\t\t\t\t\t9 - Pointers\n\t\t\t\t\t\t\t\t\t\t10- Functions\n");
		printf("\t\t\t\t\t\t\t\t\t\t11- Storage Class\n\t\t\t\t\t\t\t\t\t\t12- Preprocessor Directives\n");
		printf("\t\t\t\t\t\t\t\t\t\t13- Structure & Unions\n\t\t\t\t\t\t\t\t\t\t14- Files\n");
		printf("\t\t\t\t\t\t\t\t\t\t15- Graphics\n\t\t\t\t\t\t\t\t\t\t16- Dynamic Memory Allocation and Linked List\n\n\t\t\t\t\t\t\t\t\t\t0 - Exit\n");
		printf("\t\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		printf("\n\t\t\t\t\t\t\t\t\t\t\t  Enter your Choice : ");
		scanf("%d",&choice);
		printf("\n\n");
		switch(choice)
		{
			case 0: goto exit;
			case 1: basic();
			        printf("\n\n\tDo you want to move on to next topic (yes-anykey/no-n) : ");
					shift=getche();
					if(shift=='n' || shift=='N')
					break;
			case 2: cdec();
			        printf("\n\n\tDo you want to move on to next topic (yes-anykey/no-n) : ");
					shift=getche();
					if(shift=='n' || shift=='N')
					break;
			case 3: operexp();
			        printf("\n\n\tDo you want to move on to next topic (yes-anykey/no-n) : ");
					shift=getche();
					if(shift=='n' || shift=='N')
					break;
			case 4: ioc();
			        printf("\n\n\tDo you want to move on to next topic (yes-anykey/no-n) : ");
					shift=getche();
					if(shift=='n' || shift=='N')
					break;
			case 5: deci();
			        printf("\n\n\tDo you want to move on to next topic (yes-anykey/no-n) : ");
					shift=getche();
					if(shift=='n' || shift=='N')
					break;
			case 6: loop();
                    printf("\n\n\tDo you want to move on to next topic (yes-anykey/no-n) : ");
					shift=getche();
					if(shift=='n' || shift=='N')
					break;
			case 7: array();
			        printf("\n\n\tDo you want to move on to next topic (yes-anykey/no-n) : ");
					shift=getche();
					if(shift=='n' || shift=='N')
					break;
			case 8: strings();
			        printf("\n\n\tDo you want to move on to next topic (yes-anykey/no-n) : ");
					shift=getche();
					if(shift=='n' || shift=='N')
					break;
			case 9: pointers();
			        printf("\n\n\tDo you want to move on to next topic (yes-anykey/no-n) : ");
					shift=getche();
					if(shift=='n' || shift=='N')
					break;
			case 10: func();
			        printf("\n\n\tDo you want to move on to next topic (yes-anykey/no-n) : ");
					shift=getche();
					if(shift=='n' || shift=='N')
					break;
			case 11: storclass();
			        printf("\n\n\tDo you want to move on to next topic (yes-anykey/no-n) : ");
					shift=getche();
					if(shift=='n' || shift=='N')
					break;
			case 12: prep();
			        printf("\n\n\tDo you want to move on to next topic (yes-anykey/no-n) : ");
					shift=getche();
					if(shift=='n' || shift=='N')
					break;
			case 13: strucunion();
			        printf("\n\n\tDo you want to move on to next topic (yes-anykey/no-n) : ");
					shift=getche();
					if(shift=='n' || shift=='N')
					break;
			case 14: files();
			        printf("\n\n\tDo you want to move on to next topic (yes-anykey/no-n) : ");
					shift=getche();
					if(shift=='n' || shift=='N')
					break;
			case 15: graphics();
			        printf("\n\n\tDo you want to move on to next topic (yes-anykey/no-n) : ");
					shift=getche();
					if(shift=='n' || shift=='N')
					break;
			case 16: dyanalloc();
			        break;
			default: printf("\n\n\tWrong choice entered.....");
		}
		fflush(stdin);
		printf("\n\n\tDo you want to exit (yes-anykey/no-n) : ");
		char ex;
		ex=getche();
		if(ex!='n' || ex!='n')
		{
		exit:
		fx=1;
		printf("\n\n\n\t~~~~~THANK YOU  %s.....Hoping to see u back again...~~~~~\n\n",u.newna);
		}
		else
		{
			t++;
		system("cls");
		}
	}
}
int print()
{
	int cu;
	printf("\n\n\t  In this Topic\n");
	printf("\t1 - List of Programs\n");
	printf("\t2 - Read a Program\n");
	printf("\t3 - Add New Program\n");
	printf("\t4 - Make a copy of source code/ program\n");
	printf("\t5 - Execute a Program\n");
	printf("\t6 - Modify the source code/program\n");
	printf("\t7 - Change Editor Options\n");
	printf("\t0 - To close this Topic\n\tEnter the corresponding number : ");
	scanf("%d",&cu);
	return cu;
}
void basic()
{
	
	fp=fopen("basic.txt","r");
	disp();
	fclose(fp);	
}
void cdec()
{
	fp=fopen("cde.txt","r");
	disp();
	fclose(fp);	
	
}
void operexp()
{
	fp=fopen("operators\\oprexp.txt","r");
	printf("\n\n~~~~~~~~~~~~~~~~THEORY~~~~~~~~~~~~~~~~ :\n");
	disp();
	fclose(fp);
	p=print();
	switch(p)
	{
	     case 0: printf("---CLOSED---\n");
	     break;
		 case 1:  
		 fp=fopen("operators\\progs.txt","r");
		 disp();
	     fclose(fp);
	     break;
	     case 2 : 
		 fp=fopen("operators\\progs.txt","r");
		 disp();
	     fclose(fp);
		 printf("\tEnter your choice\n");
		 scanf("%d",&n);
		 switch(n)
 		 {
 		 	case 1 : fp=fopen("operators\\swap.c","r");
		             disp();
	     			fclose(fp);
	     			break;
	     	case 2 : fp=fopen("operators\\time.c","r");
		             disp();
	     			fclose(fp);
	     			break;		
 		 	 case 3 : fp=fopen("operators\\admno.c","r");
		             disp();
	     			fclose(fp);
	     			break;
	    	 case 4 : fp=fopen("operators\\result.c","r");
		             disp();
	     			fclose(fp);
	     			break;
			case 5 : fp=fopen("operators\\area.c","r");
		            disp();
	     			fclose(fp);
	     			break;
			case 6 : fp=fopen("operators\\menu.c","r");
		             disp();
	     			fclose(fp);
	     			break;						 			
	     	default : printf("Wrong");
 		 }
 		 break;
 		 case 3 : printf("Opening an Empty program in C editor\n");
 			      system("new.c");
 		 break;
 		 case 4:
		  fp=fopen("operators\\progs.txt","r");
		 disp();
	     fclose(fp);
	     printf("\tEnter the program to copy it into a text file\n");
		 scanf("%d",&n);
		 switch(n)
		 {
 			case 1 : fp=fopen("operators\\swap.c","r");
 			break;
 			case 2 : fp=fopen("operators\\time.c","r");
 			break;
 			case 3 : fp=fopen("operators\\admno.c","r");
 			break;
 			case 4 : fp=fopen("operators\\result.c","r");
 			break;
 			case 5 : fp=fopen("operators\\area.c","r");
 			break;
 			case 6 : fp=fopen("operators\\menu.c","r");
 			break;
 			default : printf("Wrong");
 		 }
		 
				pp=fopen("operators\\copy.txt","w");
				while(!feof(fp))
				{
				c=fgetc(fp);
				fputc(c,pp);
				}
				fclose(fp);
				fclose(pp);
				system("operators\\copy.txt");
				break;
	case 5:
		  fp=fopen("operators\\progs.txt","r");
		 disp();
	     fclose(fp);
	     printf("\tEnter the program to execute it\n");
		 scanf("%d",&n);
		 switch(n)
		 {
 			case 1 : system("operators\\swap.exe");
 			break;
 			case 2 : system("operators\\time.exe");
 			break;
 			case 3 : system("operators\\admno.exe");
 			break;
 			case 4 : system("operators\\result.exe");
 			break;
 			case 5 : system("operators\\area.exe");
 			break;
 			case 6 : system("operators\\menu.exe");
 			break;
 			default : printf("Wrong");
 		 }
 		 break;
 case 6 : 
 fp=fopen("operators\\progs.txt","r");
		 disp();
	     fclose(fp);
	     printf("\tEnter the program to modify it\n");
		 scanf("%d",&n);
		 switch(n)
		 {
 			case 1 : system("operators\\swap.c");
 			break;
 			case 2 : system("operators\\time.c");
 			break;
 			case 3 : system("operators\\admno.c");
 			break;
 			case 4 : system("operators\\result.c");
 			break;
 			case 5 : system("operators\\area.c");
 			break;
 			case 6 : system("operators\\menu.c");
 			break;
 			default : printf("Wrong");
 		 }
 		 break;
 case 7 : editor();
  break;
 default : printf("Wrong");
	}
	printf("\n\n\t    want to go back? (yes-anykey/no-n) : ");
	c=getche();
	if(c!='n')
		operexp();
}
void ioc()
{
	printf("\n\n~~~~~~~~~~~~~~~~THEORY~~~~~~~~~~~~~~~~ :\n");
	fp=fopen("input_output\\inpout.txt","r");
	disp();
	fclose(fp);	
	p=print();
	switch(p)
	{
	    case 0: printf("---CLOSED---\n");
	     break;
		 case 1:  
		 fp=fopen("input_output\\progs.txt","r");
		 disp();
	     fclose(fp);
	     break;
	     case 2 : 
		 fp=fopen("input_output\\progs.txt","r");
		 disp();
	     fclose(fp);
		 printf("\tEnter your choice\n");
		 scanf("%d",&n);
		 switch(n)
 		 {
 		 	case 1 : fp=fopen("input_output\\inp.c","r");
		             disp();
	     			fclose(fp);
	     			break;
	     	case 2 : fp=fopen("input_output\\chartypes.c","r");
		             disp();
	     			fclose(fp);
	     			break;		
 		  default : printf("Wrong Choice...");
 		 }
 		 break;
 		 case 3 : printf("Opening an Empty program in C editor\n");
 		 system("new.c");
 		 break;
 		 case 4:
		  fp=fopen("input_output\\progs.txt","r");
		 disp();
	     fclose(fp);
	     printf("\tEnter the program to copy it into a text file\n");
		 scanf("%d",&n);
		 switch(n)
		 {
 			case 1 : fp=fopen("input_output\\inp.c","r");
 			break;
 			case 2 : fp=fopen("input_output\\chartypes.c","r");
 			break;
 			default : printf("Wrong Choice...");
 		 }
		 
				pp=fopen("input_output\\copy.txt","w");
				while(!feof(fp))
				{
				c=fgetc(fp);
				fputc(c,pp);
				}
				fclose(fp);
				fclose(pp);
				system("input_output\\copy.txt");
				break;
	case 5:
		  fp=fopen("input_output\\progs.txt","r");
		 disp();
	     fclose(fp);
	     printf("\tEnter the program to execute it\n");
		 scanf("%d",&n);
		 switch(n)
		 {
 			case 1 : system("input_output\\inp.exe");
 			break;
 			case 2 : system("input_output\\chartypes.exe");
 			break;
 			default : printf("Wrong Choice...");
 		 }
 		 break;
 case 6 : 
 fp=fopen("input_output\\progs.txt","r");
		 disp();
	     fclose(fp);
	     printf("\tEnter the program to modify it\n");
		 scanf("%d",&n);
		 switch(n)
		 {
 			case 1 : system("input_output\\inp.c");
 			break;
 			case 2 : system("input_output\\chartypes.c");
 			break;
 			default : printf("Wrong Choice...");
 		 }
 		 break;
 case 7 : editor();
  break;
 default : printf("Wrong Choice...");
	}
	printf("\n\n\t    want to go back? (yes-anykey/no-n) : ");
	c=getche();
	if(c!='n')
		ioc();
}
void deci()
{
	printf("\n\n~~~~~~~~~~~~~~~~THEORY~~~~~~~~~~~~~~~~ :\n");
	fp=fopen("decision\\deci.txt","r");
	disp();
	fclose(fp);	
	p=print();
	switch(p)
	{
		case 0: printf("---CLOSED---\n");
	     break;
	     case 1:  
		 fp=fopen("decision\\progs.txt","r");
		 disp();
	     fclose(fp);
	     break;
	     case 2 : 
		 fp=fopen("decision\\progs.txt","r");
		 disp();
	     fclose(fp);
		 printf("\tEnter your choice\n");
		 scanf("%d",&n);
		 switch(n)
 		 {
 		 	case 1 : fp=fopen("decision\\evenodd.c","r");
		             disp();
	     			fclose(fp);
	     			break;
	     	case 2 : fp=fopen("decision\\agecomp.c","r");
		            disp();
	     			fclose(fp);
	     			break;		
 		  case 3 : fp=fopen("decision\\calci.c","r");
		             disp();
	     			fclose(fp);
	     			break;
	     case 4 : fp=fopen("decision\\grading.c","r");
		            disp();
	     			fclose(fp);
	     			break;
		case 5 : fp=fopen("decision\\elecbill.c","r");
		             disp();
	     			fclose(fp);
	     			break;					 			
	     default : printf("Wrong");
 		 }
 		 break;
 		 case 3 : printf("Opening an Empty program in C editor\n");
 		 system("new.c");
 		 break;
 		 case 4:
		  fp=fopen("decision\\progs.txt","r");
		 disp();
	     fclose(fp);
	     printf("\tEnter the program to copy it into a text file\n");
		 scanf("%d",&n);
		 switch(n)
		 {
 			case 1 : fp=fopen("decision\\evenodd.c","r");
 			break;
 			case 2 : fp=fopen("decision\\agecomp.c","r");
 			break;
 			case 3 : fp=fopen("decision\\calci.c","r");
 			break;
 			case 4 : fp=fopen("decision\\grading.c","r");
 			break;
 			case 5 : fp=fopen("decision\\elecbill.c","r");
 			break;
 			default : printf("Wrong Choice...");
 		 }
		 
				pp=fopen("decision\\copy.txt","w");
				while(!feof(fp))
				{
				c=fgetc(fp);
				fputc(c,pp);
				}
				fclose(fp);
				fclose(pp);
				system("decision\\copy.txt");
				break;
	case 5:
		  fp=fopen("decision\\progs.txt","r");
		 disp();
	     fclose(fp);
	     printf("\tEnter the program to execute it\n");
		 scanf("%d",&n);
		 switch(n)
		 {
 			case 1 : system("decision\\evenodd.exe");
 			break;
 			case 2 : system("decision\\agecomp.exe");
 			break;
 			case 3 : system("decision\\calci.exe");
 			break;
 			case 4 : system("decision\\grading.exe");
 			break;
 			case 5 : system("decision\\elecbill.exe");
 			break;
 			default : printf("Wrong Choice...");
 		 }
 		 break;
 case 6 : 
 fp=fopen("decision\\progs.txt","r");
		 disp();
	     fclose(fp);
	     printf("\tEnter the program to modify it\n");
		 scanf("%d",&n);
		 switch(n)
		 {
 			case 1 : system("decision\\evenodd.c");
 			break;
 			case 2 : system("decision\\agecomp.c");
 			break;
 			case 3 : system("decision\\calci.c");
 			break;
 			case 4 : system("decision\\grading.c");
 			break;
 			case 5 : system("decision\\elecbill.c");
 			break;
 			default : printf("Wrong Choice...");
 		 }
 		 break;
 case 7 : editor();
  break;
 default : printf("Wrong Choice...");
	}
	printf("\n\n\t    want to go back? (yes-anykey/no-n) : ");
	c=getche();
	if(c!='n')
		deci();
}
void loop()
{
	printf("\n\n~~~~~~~~~~~~~~~~THEORY~~~~~~~~~~~~~~~~ :\n");
	fp=fopen("looping\\loops.txt","r");
	disp();
	fclose(fp);	
	p=print();
	switch(p)
	{
	    case 0: printf("---CLOSED---\n");
	     break;
		  case 1:  
		 fp=fopen("looping\\progs.txt","r");
		 disp();
	     fclose(fp);
	     break;
	     case 2 : 
		 fp=fopen("looping\\progs.txt","r");
		 disp();
	     fclose(fp);
		 printf("\tEnter your choice\n");
		 scanf("%d",&n);
		 switch(n)
 		 {
 		 	case 1 : fp=fopen("looping\\till0.c","r");
		             disp();
	     			fclose(fp);
	     			break;
	     	case 2 : fp=fopen("looping\\table.c","r");
		             disp();
	     			fclose(fp);
	     			break;		
 		  case 3 : fp=fopen("looping\\strglen.c","r");
		             disp();
	     			fclose(fp);
	     			break;
	     case 4 : fp=fopen("looping\\prime.c","r");
		            disp();
	     			fclose(fp);
	     			break;
		case 5 : fp=fopen("looping\\pattern1.c","r");
		            disp();
	     			fclose(fp);
	     			break;
		default : printf("Wrong Choice...");
 		 }
 		 break;
 		 case 3 : printf("Opening an Empty program in C editor\n");
 		 system("new.c");
 		 break;
 		 case 4:
		  fp=fopen("looping\\progs.txt","r");
		 disp();
	     fclose(fp);
	     printf("\tEnter the program to copy it into a text file\n");
		 scanf("%d",&n);
		 switch(n)
		 {
 			case 1 : fp=fopen("looping\\till0.c","r");
 			break;
 			case 2 : fp=fopen("looping\\table.c","r");
 			break;
 			case 3 : fp=fopen("looping\\strglen.c","r");
 			break;
 			case 4 : fp=fopen("looping\\prime.c","r");
 			break;
 			case 5 : fp=fopen("looping\\pattern1.c","r");
 			break;
 			default : printf("Wrong Choice...");
 		 }
		 
				pp=fopen("looping\\copy.txt","w");
				while(!feof(fp))
				{
				c=fgetc(fp);
				fputc(c,pp);
				}
				fclose(fp);
				fclose(pp);
				system("looping\\copy.txt");
				break;
	case 5:
		  fp=fopen("looping\\progs.txt","r");
		 disp();
	     fclose(fp);
	     printf("\tEnter the program to execute it\n");
		 scanf("%d",&n);
		 switch(n)
		 {
 			case 1 : system("looping\\till0.exe");
 			break;
 			case 2 : system("looping\\table.exe");
 			break;
 			case 3 : system("looping\\strglen.exe");
 			break;
 			case 4 : system("looping\\prime.exe");
 			break;
 			case 5 : system("looping\\pattern1.exe");
 			break;
 			default : printf("Wrong Choice...");
 		 }
 		 break;
 case 6 : 
 fp=fopen("looping\\progs.txt","r");
		 disp();
	     fclose(fp);
	     printf("\tEnter the program to modify it\n");
		 scanf("%d",&n);
		 switch(n)
		 {
 			case 1 : system("looping\\till0.c");
 			break;
 			case 2 : system("looping\\table.c");
 			break;
 			case 3 : system("looping\\strglen.c");
 			break;
 			case 4 : system("looping\\prime.c");
 			break;
 			case 5 : system("looping\\pattern1.c");
 			break;
 			default : printf("Wrong Choice...");
 		 }
 		 break;
 case 7 : editor();
  break;
 default : printf("Wrong Choice...");
	}
	printf("\n\n\t    want to go back? (yes-anykey/no-n) : ");
	c=getche();
	if(c!='n')
		loop();
}
void array()
{
	printf("\n\n~~~~~~~~~~~~~~~~THEORY~~~~~~~~~~~~~~~~ :\n");
	fp=fopen("arrays\\arrys.txt","r");
	disp();
	fclose(fp);	
	p=print();
	switch(p)
	{
	     case 0: printf("---CLOSED---\n");
	     break;
		 case 1:  
		 fp=fopen("arrays\\progs.txt","r");
		 disp();
	     fclose(fp);
	     break;
	     case 2 : 
		 fp=fopen("arrays\\progs.txt","r");
		 disp();
	     fclose(fp);
		 printf("\tEnter your choice\n");
		 scanf("%d",&n);
		 switch(n)
 		 {
 		 	case 1 : fp=fopen("arrays\\revarray.c","r");
		             disp();
	     			fclose(fp);
	     			break;
	     	case 2 : fp=fopen("arrays\\revstr.c","r");
		            disp();
	     			fclose(fp);
	     			break;		
 		  case 3 : fp=fopen("arrays\\strcopy.c","r");
		            disp();
	     			fclose(fp);
	     			break;
	     case 4 : fp=fopen("arrays\\sort.c","r");
		             disp();
	     			fclose(fp);
	     			break;
		case 5 : fp=fopen("arrays\\menu.c","r");
		             disp();
	     			fclose(fp);
	     			break;
		default : printf("Wrong Choice...");
 		 }
 		 break;
 		 case 3 : printf("Opening an Empty program in C editor\n");
 		 system("new.c");
 		 break;
 		 case 4:
		  fp=fopen("arrays\\progs.txt","r");
		 disp();
	     fclose(fp);
	     printf("\tEnter the program to copy it into a text file\n");
		 scanf("%d",&n);
		 switch(n)
		 {
 			case 1 : fp=fopen("arrays\\revarray.c","r");
 			break;
 			case 2 : fp=fopen("arrays\\revstr.c","r");
 			break;
 			case 3 : fp=fopen("arrays\\strcopy.c","r");
 			break;
 			case 4 : fp=fopen("arrays\\sort.c","r");
 			break;
 			case 5 : fp=fopen("arrays\\menu.c","r");
 			break;
 			default : printf("Wrong Choice...");
 		 }
		 
				pp=fopen("arrays\\copy.txt","w");
				while(!feof(fp))
				{
				c=fgetc(fp);
				fputc(c,pp);
				}
				fclose(fp);
				fclose(pp);
				system("arrays\\copy.txt");
				break;
	case 5:
		  fp=fopen("arrays\\progs.txt","r");
		 disp();
	     fclose(fp);
	     printf("\tEnter the program to execute it\n");
		 scanf("%d",&n);
		 switch(n)
		 {
 			case 1 : system("arrays\\revarray.exe");
 			break;
 			case 2 : system("arrays\\revstr.exe");
 			break;
 			case 3 : system("arrays\\strcopy.exe");
 			break;
 			case 4 : system("arrays\\sort.exe");
 			break;
 			case 5 : system("arrays\\menu.exe");
 			break;
 			default : printf("Wrong Choice...");
 		 }
 		 break;
 case 6 : 
 fp=fopen("operators\\progs.txt","r");
		 disp();
	     fclose(fp);
	     printf("\tEnter the program to modify it\n");
		 scanf("%d",&n);
		 switch(n)
		 {
 			case 1 : system("arrays\\revarray.c");
 			break;
 			case 2 : system("arrays\\revstr.c");
 			break;
 			case 3 : system("arrays\\strcopy.c");
 			break;
 			case 4 : system("arrays\\sort.c");
 			break;
 			case 5 : system("arrays\\menu.c");
 			break;
 			default : printf("Wrong Choice...");
 		 }
 		 break;
 case 7 : editor();
  break;
 default : printf("Wrong Choice...");
	}
	printf("\n\n\t    want to go back? (yes-anykey/no-n) : ");
	c=getche();
	if(c!='n')
		array();
}
void strings()
{
	printf("\n\n~~~~~~~~~~~~~~~~THEORY~~~~~~~~~~~~~~~~ :\n");
	fp=fopen("string\\strings.txt","r");
	disp();
	fclose(fp);	
	p=print();
	switch(p)
	{
	     case 0: printf("---CLOSED---\n");
	     break;
		 case 1:  
		 fp=fopen("string\\progs.txt","r");
		 disp();
	     fclose(fp);
	     break;
	     case 2 : 
		 fp=fopen("string\\progs.txt","r");
		 disp();
	     fclose(fp);
		 printf("\tEnter your choice\n");
		 scanf("%d",&n);
		 switch(n)
 		 {
 		 	case 1 : fp=fopen("string\\len.c","r");
		             disp();
	     			fclose(fp);
	     			break;
	     	case 2 : fp=fopen("string\\cpy.c","r");
		             disp();
	     			fclose(fp);
	     			break;		
 		  case 3 : fp=fopen("string\\cmp.c","r");
		             disp();
	     			fclose(fp);
	     			break;
	     case 4 : fp=fopen("string\\cat.c","r");
		            disp();
	     			fclose(fp);
	     			break;
		case 5 : fp=fopen("string\\deci.c","r");
		             disp();
	     			fclose(fp);
	     			break;					 			
	     default : printf("Wrong Choice...");
 		 }
 		 break;
 		 case 3 : printf("Opening an Empty program in C editor\n");
 		 system("new.c");
 		 break;
 		 case 4:
		  fp=fopen("string\\progs.txt","r");
		 disp();
	     fclose(fp);
	     printf("\tEnter the program to copy it into a text file\n");
		 scanf("%d",&n);
		 switch(n)
		 {
 			case 1 : fp=fopen("string\\len.c","r");
 			break;
 			case 2 : fp=fopen("string\\cpy.c","r");
 			break;
 			case 3 : fp=fopen("string\\cmp.c","r");
 			break;
 			case 4 : fp=fopen("string\\cat.c","r");
 			break;
 			case 5 : fp=fopen("string\\deci.c","r");
 			break;
 			default : printf("Wrong Choice...");
 		 }
		 
				pp=fopen("string\\copy.txt","w");
				while(!feof(fp))
				{
				c=fgetc(fp);
				fputc(c,pp);
				}
				fclose(fp);
				fclose(pp);
				system("string\\copy.txt");
				break;
	case 5:
		  fp=fopen("string\\progs.txt","r");
		 disp();
	     fclose(fp);
	     printf("\tEnter the program to execute it\n");
		 scanf("%d",&n);
		 switch(n)
		 {
 			case 1 : system("string\\len.exe");
 			break;
 			case 2 : system("string\\cpy.exe");
 			break;
 			case 3 : system("string\\cmp.exe");
 			break;
 			case 4 : system("string\\cat.exe");
 			break;
 			case 5 : system("string\\deci.exe");
 			break;
 			default : printf("Wrong Choice...");
 		 }
 		 break;
 case 6 : 
 fp=fopen("string\\progs.txt","r");
		 disp();
	     fclose(fp);
	     printf("\tEnter the program to modify it\n");
		 scanf("%d",&n);
		 switch(n)
		 {
 			case 1 : system("string\\len.c");
 			break;
 			case 2 : system("string\\cpy.c");
 			break;
 			case 3 : system("string\\cmp.c");
 			break;
 			case 4 : system("string\\cat.c");
 			break;
 			case 5 : system("string\\deci.c");
 			break;
 			default : printf("Wrong Choice...");
 		 }
 		 break;
 case 7 : editor();
  break;
 default : printf("Wrong Choice...");
	}
	printf("\n\n\t    want to go back? (yes-anykey/no-n) : ");
	c=getche();
	if(c!='n')
		strings();
}
void pointers()
{
	printf("\n\n~~~~~~~~~~~~~~~~THEORY~~~~~~~~~~~~~~~~ :\n");
	fp=fopen("pointer\\ptr.txt","r");
	disp();
	fclose(fp);	
	p=print();
	switch(p)
	{
	    case 0: printf("---CLOSED---\n");
	     break;
		  case 1:  
		 fp=fopen("pointer\\progs.txt","r");
		 disp();
	     fclose(fp);
	     break;
	     case 2 : 
		 fp=fopen("pointer\\progs.txt","r");
		 disp();
	     fclose(fp);
		 printf("\tEnter your choice\n");
		 scanf("%d",&n);
		 switch(n)
 		 {
 		 	case 1 : fp=fopen("pointer\\add.c","r");
		             disp();
	     			fclose(fp);
	     			break;
	     	case 2 : fp=fopen("pointer\\ptrptr.c","r");
		            disp();
	     			fclose(fp);
	     			break;		
 		  case 3 : fp=fopen("pointer\\swapptr.c","r");
		            disp();
	     			fclose(fp);
	     			break;
	     default : printf("Wrong Choice...");
 		 }
 		 break;
 		 case 3 : printf("Opening an Empty program in C editor\n");
 		 system("new.c");
 		 break;
 		 case 4:
		  fp=fopen("pointer\\progs.txt","r");
		 disp();
	     fclose(fp);
	     printf("\tEnter the program to copy it into a text file\n");
		 scanf("%d",&n);
		 switch(n)
		 {
 			case 1 : fp=fopen("pointer\\add.c","r");
 			break;
 			case 2 : fp=fopen("pointer\\ptrptr.c","r");
 			break;
 			case 3 : fp=fopen("pointer\\swapptr.c","r");
 			break;
 			default : printf("Wrong Choice...");
 		 }
		 
				pp=fopen("pointer\\copy.txt","w");
				while(!feof(fp))
				{
				c=fgetc(fp);
				fputc(c,pp);
				}
				fclose(fp);
				fclose(pp);
				system("pointer\\copy.txt");
				break;
	case 5:
		  fp=fopen("pointer\\progs.txt","r");
		 disp();
	     fclose(fp);
	     printf("\tEnter the program to execute it\n");
		 scanf("%d",&n);
		 switch(n)
		 {
 			case 1 : system("pointer\\add.exe");
 			break;
 			case 2 : system("pointer\\ptrptr.exe");
 			break;
 			case 3 : system("pointer\\swapptr.exe");
 			break;
 			default : printf("Wrong Choice...");
 		 }
 		 break;
 case 6 : 
 fp=fopen("pointer\\progs.txt","r");
		 disp();
	     fclose(fp);
	     printf("\tEnter the program to modify it\n");
		 scanf("%d",&n);
		 switch(n)
		 {
 			case 1 : system("pointer\\add.c");
 			break;
 			case 2 : system("pointer\\ptrptr.c");
 			break;
 			case 3 : system("pointer\\swapptr.c");
 			break;
 			default : printf("Wrong Choice...");
 		 }
 		 break;
 case 7 : editor();
  break;
 default : printf("Wrong Choice...");
	}
	char cht;
	printf("\n\n\t    want to go back? (yes-anykey/no-n) : ");
	cht=getche();
	if(cht!='n' || c!='N')
		pointers();
	
}
void func()
{
	printf("\n\n~~~~~~~~~~~~~~~~THEORY~~~~~~~~~~~~~~~~ :\n");
	fp=fopen("functions\\funcs.txt","r");
	disp();
	fclose(fp);	
	p=print();
	switch(p)
	{
	     case 0: printf("---CLOSED---\n");
	     break;
		 case 1:  
		 fp=fopen("functions\\progs.txt","r");
		 disp();
	     fclose(fp);
	     break;
	     case 2 : 
		 fp=fopen("functions\\progs.txt","r");
		 disp();
	     fclose(fp);
		 printf("\tEnter your choice\n");
		 scanf("%d",&n);
		 switch(n)
 		 {
 		 	case 1 : fp=fopen("functions\\swapptr.c","r");
		             disp();
	     			fclose(fp);
	     			break;
	     	case 2 : fp=fopen("functions\\addi.c","r");
		             disp();
	     			fclose(fp);
	     			break;		
 		  default : printf("Wrong Choice...");
 		 }
 		 break;
 		 case 3 : printf("Opening an Empty program in C editor\n");
 		 system("new.c");
 		 break;
 		 case 4:
		  fp=fopen("functions\\progs.txt","r");
		 disp();
	     fclose(fp);
	     printf("\tEnter the program to copy it into a text file\n");
		 scanf("%d",&n);
		 switch(n)
		 {
 			case 1 : fp=fopen("functions\\swappptr.c","r");
 			break;
 			case 2 : fp=fopen("functions\\addi.c","r");
 			break;
 			default : printf("Wrong Choice...");
 		 }
		 
				pp=fopen("functions\\copy.txt","w");
				while(!feof(fp))
				{
				c=fgetc(fp);
				fputc(c,pp);
				}
				fclose(fp);
				fclose(pp);
				system("functions\\copy.txt");
				break;
	case 5:
		  fp=fopen("functions\\progs.txt","r");
		 disp();
	     fclose(fp);
	     printf("\tEnter the program to execute it\n");
		 scanf("%d",&n);
		 switch(n)
		 {
 			case 1 : system("functions\\swapptr.exe");
 			break;
 			case 2 : system("functions\\addi.exe");
 			break;
 			default : printf("Wrong Choice...");
 		 }
 		 break;
 case 6 : 
 fp=fopen("functions\\progs.txt","r");
		 while(!feof(fp))
	     {
		  c=fgetc(fp);
		  printf("%c",c);
     	 }
	     fclose(fp);
	     printf("\tEnter the program to modify it\n");
		 scanf("%d",&n);
		 switch(n)
		 {
 			case 1 : system("functions\\swapptr.c");
 			break;
 			case 2 : system("functions\\addi.c");
 			break;
 			default : printf("Wrong Choice...");
 		 }
 		 break;
 case 7 : editor();
  break;
 default : printf("Wrong Choice...");
	}
	printf("\n\n\t    want to go back? (yes-anykey/no-n) : ");
	c=getche();
	if(c!='n')
		func();
}
void storclass()
{
	printf("\n\n~~~~~~~~~~~~~~~~THEORY~~~~~~~~~~~~~~~~ :\n");
	fp=fopen("storage_classes\\strc.txt","r");
	disp();
	fclose(fp);
	p=print();
	switch(p)
	{
	     case 0: printf("---CLOSED---\n");
	     break;
		 case 1:  
		 fp=fopen("storage_classes\\progs.txt","r");
		 disp();
	     fclose(fp);
	     break;
	     case 2 : 
		 fp=fopen("storage_classes\\progs.txt","r");
		 disp();
	     fclose(fp);
		 printf("\tEnter your choice\n");
		 scanf("%d",&n);
		 switch(n)
 		 {
 		 	case 1 : fp=fopen("storage_classes\\global.c","r");
		            disp();
	     			fclose(fp);
	     			break;
	     	case 2 : fp=fopen("storage_classes\\static.c","r");
		            disp();
	     			fclose(fp);
	     			break;		
 		  case 3 : fp=fopen("storage_classes\\auto.c","r");
		            disp();
	     			fclose(fp);
	     			break;
	     case 4 : fp=fopen("storage_classes\\scope.c","r");
		            disp();
	     			fclose(fp);
	     			break;
		default : printf("Wrong Choice...");
 		 }
 		 break;
 		 case 3 : printf("Opening an Empty program in C editor\n");
 		 system("new.c");
 		 break;
 		 case 4:
		  fp=fopen("storage_classes\\progs.txt","r");
		 disp();
	     fclose(fp);
	     printf("\tEnter the program to copy it into a text file\n");
		 scanf("%d",&n);
		 switch(n)
		 {
 			case 1 : fp=fopen("storage_classes\\global.c","r");
 			break;
 			case 2 : fp=fopen("storage_classes\\static.c","r");
 			break;
 			case 3 : fp=fopen("storage_classes\\auto.c","r");
 			break;
 			case 4 : fp=fopen("storage_classes\\scope.c","r");
 			break;
 			default : printf("Wrong Choice...");
 		 }
		 
				pp=fopen("storage_classes\\copy.txt","w");
				while(!feof(fp))
				{
				c=fgetc(fp);
				fputc(c,pp);
				}
				fclose(fp);
				fclose(pp);
				system("storage_classes\\copy.txt");
				break;
	case 5:
		  fp=fopen("storage_classes\\progs.txt","r");
		 disp();
	     fclose(fp);
	     printf("\tEnter the program to execute it\n");
		 scanf("%d",&n);
		 switch(n)
		 {
 			case 1 : system("storage_classes\\global.exe");
 			break;
 			case 2 : system("storage_classes\\static.exe");
 			break;
 			case 3 : system("storage_classes\\auto.exe");
 			break;
 			case 4 : system("storage_classes\\scope.exe");
 			break;
 			default : printf("Wrong Choice...");
 		 }
 		 break;
 case 6 : 
 fp=fopen("storage_classes\\progs.txt","r");
		 disp();
	     fclose(fp);
	     printf("\tEnter the program to modify it\n");
		 scanf("%d",&n);
		 switch(n)
		 {
 			case 1 : system("storage_classes\\global.c");
 			break;
 			case 2 : system("storage_classes\\static.c");
 			break;
 			case 3 : system("storage_classes\\auto.c");
 			break;
 			case 4 : system("storage_classes\\scope.c");
 			break;
 			default : printf("Wrong Choice...");
 		 }
 		 break;
 case 7 : editor();
  break;
 default : printf("Wrong Choice...");
	}
	printf("\n\n\t    want to go back? (yes-anykey/no-n) : ");
	c=getche();
	if(c!='n')
		storclass();	
}
void prep()
{
	printf("\n\n~~~~~~~~~~~~~~~~THEORY~~~~~~~~~~~~~~~~ :\n");
	fp=fopen("preprocessor_dir\\prepro.txt","r");
	disp();
	fclose(fp);
	printf("\n\n\t    want to go back? (yes-anykey/no-n) : ");
	c=getche();
	if(c!='n')
		prep();
}
void strucunion()
{
	printf("\n\n~~~~~~~~~~~~~~~~THEORY~~~~~~~~~~~~~~~~ :\n");
	fp=fopen("structure_unions\\strucunions.txt","r");
	disp();
	fclose(fp);
	p=print();
	switch(p)
	{
	     case 0: printf("---CLOSED---\n");
	     break;
		 case 1:  
		 fp=fopen("structure_unions\\progs.txt","r");
		 disp();
	     fclose(fp);
	     break;
	     case 2 : 
		 fp=fopen("structure_unions\\progs.txt","r");
		 disp();
	     fclose(fp);
		 printf("\tEnter your choice\n");
		 scanf("%d",&n);
		 switch(n)
 		 {
 		 	case 1 : fp=fopen("structure_unions\\sinfo.c","r");
		            disp();
	     			fclose(fp);
	     			break;
	     	case 2 : fp=fopen("structure_unions\\dist.c","r");
		            disp();
	     			fclose(fp);
	     			break;		
 		  case 3 : fp=fopen("structure_unions\\num.c","r");
		            disp();
	     			fclose(fp);
	     			break;
	     case 4 : fp=fopen("structure_unions\\reali.c","r");
		            disp();
	     			fclose(fp);
	     			break;
		case 5 : fp=fopen("structure_unions\\stud.c","r");
		            disp();
	     			fclose(fp);
	     			break;
		default : printf("Wrong Choice...");
 		 }
 		 break;
 		 case 3 : printf("Opening an Empty program in C editor\n");
 		 system("new.c");
 		 break;
 		 case 4:
		  fp=fopen("structure_unions\\progs.txt","r");
		 disp();
	     fclose(fp);
	     printf("\tEnter the program to copy it into a text file\n");
		 scanf("%d",&n);
		 switch(n)
		 {
 			case 1 : fp=fopen("structure_unions\\sinfo.c","r");
 			break;
 			case 2 : fp=fopen("structure_unions\\dist.c","r");
 			break;
 			case 3 : fp=fopen("structure_unions\\num.c","r");
 			break;
 			case 4 : fp=fopen("structure_unions\\reali.c","r");
 			break;
 			case 5 : fp=fopen("structure_unions\\stud.c","r");
 			break;
 			default : printf("Wrong Choice...");
 		 }
		 
				pp=fopen("structure_unions\\copy.txt","w");
				while(!feof(fp))
				{
				c=fgetc(fp);
				fputc(c,pp);
				}
				fclose(fp);
				fclose(pp);
				system("structure_unions\\copy.txt");
				break;
	case 5:
		  fp=fopen("structure_unions\\progs.txt","r");
		 disp();
	     fclose(fp);
	     printf("\tEnter the program to execute it\n");
		 scanf("%d",&n);
		 switch(n)
		 {
 			case 1 : system("structure_unions\\sinfo.exe");
 			break;
 			case 2 : system("structure_unions\\dist.exe");
 			break;
 			case 3 : system("structure_unions\\num.exe");
 			break;
 			case 4 : system("structure_unions\\reali.exe");
 			break;
 			case 5 : system("structure_unions\\stud.exe");
 			break;
 			default : printf("Wrong Choice...");
 		 }
 		 break;
 case 6 : 
 fp=fopen("structure_unions\\progs.txt","r");
		 disp();
	     fclose(fp);
	     printf("\tEnter the program to modify it\n");
		 scanf("%d",&n);
		 switch(n)
		 {
 			case 1 : system("structure_unions\\sinfo.c");
 			break;
 			case 2 : system("structure_unions\\dist.c");
 			break;
 			case 3 : system("structure_unions\\num.c");
 			break;
 			case 4 : system("structure_unions\\reali.c");
 			break;
 			case 5 : system("structure_unions\\stud.c");
 			break;
 			default : printf("Wrong Choice...");
 		 }
 		 break;
 case 7 : editor();
  break;
 default : printf("Wrong Choice...");
	}	
	printf("\n\n\t    want to go back? (yes-anykey/no-n) : ");
	c=getche();
	if(c!='n')
		strucunion();
}
void files()
{
	printf("\n\n~~~~~~~~~~~~~~~~THEORY~~~~~~~~~~~~~~~~ : \n");
	fp=fopen("file_handling\\files.txt","r");
	disp();
	fclose(fp);
	p=print();
	switch(p)
	{
	     case 0: printf("---CLOSED---\n");
	     break;
		 case 1:  
		 fp=fopen("file_handling\\progs.txt","r");
		 disp();
	     fclose(fp);
	     break;
	     case 2 : 
		 fp=fopen("file_handling\\progs.txt","r");
		 disp();
	     fclose(fp);
		 printf("\tEnter your choice\n");
		 scanf("%d",&n);
		 switch(n)
 		 {
 		 	case 1 : fp=fopen("file_handling\\create.c","r");
		             disp();
	     			fclose(fp);
	     			break;
	     	case 2 : fp=fopen("file_handling\\enter.c","r");
		            disp();
	     			fclose(fp);
	     			break;		
 		  case 3 : fp=fopen("file_handling\\sfo.c","r");
		            disp();
	     			fclose(fp);
	     			break;
	     case 4 : fp=fopen("file_handling\\marks.c","r");
		            disp();
	     			fclose(fp);
	     			break;
		case 5 : fp=fopen("operators\\stud.c","r");
		            disp();
	     			fclose(fp);
	     			break;
		default : printf("Wrong Choice...");
 		 }
 		 break;
 		 case 3 : printf("Opening an Empty program in C editor\n");
 		 system("new.c");
 		 break;
 		 case 4:
		  fp=fopen("file_handling\\progs.txt","r");
		 disp();
	     fclose(fp);
	     printf("\tEnter the program to copy it into a text file\n");
		 scanf("%d",&n);
		 switch(n)
		 {
 			case 1 : fp=fopen("file_handling\\create.c","r");
 			break;
 			case 2 : fp=fopen("file_handling\\enter.c","r");
 			break;
 			case 3 : fp=fopen("file_handling\\sfo.c","r");
 			break;
 			case 4 : fp=fopen("file_handling\\marks.c","r");
 			break;
 			case 5 : fp=fopen("file_handling\\stud.c","r");
 			break;
 			default : printf("Wrong Choice...");
 		 }
		 
				pp=fopen("file_handling\\copy.txt","w");
				while(!feof(fp))
				{
				c=fgetc(fp);
				fputc(c,pp);
				}
				fclose(fp);
				fclose(pp);
				system("file_handling\\copy.txt");
				break;
	case 5:
		  fp=fopen("file_handling\\progs.txt","r");
		 disp();
	     fclose(fp);
	     printf("\tEnter the program to execute it\n");
		 scanf("%d",&n);
		 switch(n)
		 {
 			case 1 : system("file_handling\\create.exe");
 			break;
 			case 2 : system("file_handling\\enter.exe");
 			break;
 			case 3 : system("file_handling\\sfo.exe");
 			break;
 			case 4 : system("file_handling\\marks.exe");
 			break;
 			case 5 : system("ofile_handling\\stud.exe");
 			break;
 			default : printf("Wrong Choice...");
 		 }
 		 break;
 case 6 : 
 fp=fopen("file_handling\\progs.txt","r");
		 disp();
	     fclose(fp);
	     printf("\tEnter the program to modify it\n");
		 scanf("%d",&n);
		 switch(n)
		 {
 			case 1 : system("file_handling\\create.c");
 			break;
 			case 2 : system("file_handling\\enter.c");
 			break;
 			case 3 : system("file_handling\\sfo.c");
 			break;
 			case 4 : system("file_handling\\marks.c");
 			break;
 			case 5 : system("file_handling\\stud.c");
 			break;
 			default : printf("Wrong Choice...");
 		 }
 		 break;
 case 7 : editor();
  break;
 default : printf("Wrong Choice...");
	}	
	printf("\n\n\t    want to go back? (yes-anykey/no-n) : ");
	c=getche();
	if(c!='n')
		files();
}
void graphics()
{
	printf("\n\n~~~~~~~~~~~~~~~~THEORY~~~~~~~~~~~~~~~~ : \n");
	fp=fopen("graphics\\graphics.txt","r");
	disp();
	fclose(fp);	
	p=print();
	switch(p)
	{
	     case 0: printf("---CLOSED---\n");
	     break;
		 case 1:  
		 fp=fopen("graphics\\progs.txt","r");
		 disp();
	     fclose(fp);
	     break;
	     case 2 : 
		 fp=fopen("graphics\\progs.txt","r");
		disp();
	     fclose(fp);
		 printf("\tEnter your choice\n");
		 scanf("%d",&n);
		 switch(n)
 		 {
 		 	case 1 : fp=fopen("graphics\\test.c","r");
		             disp();
	     			fclose(fp);
	     			break;
	     	case 2 : fp=fopen("graphics\\line.c","r");
		             disp();
	     			fclose(fp);
	     			break;		
 		  case 3 : fp=fopen("graphics\\circle.c","r");
		            disp();
	     			fclose(fp);
	     			break;
	     case 4 : fp=fopen("graphics\\ellipse.c","r");
		            disp();
	     			fclose(fp);
	     			break;
		case 5 : fp=fopen("graphics\\rect.c","r");
		            disp();
	     			fclose(fp);
	     			break;
		default : printf("Wrong Choice...");
 		 }
 		 break;
 		 case 3 : printf("Opening an Empty program in C editor\n");
 		 system("new.c");
 		 break;
 		 case 4:
		  fp=fopen("graphics\\progs.txt","r");
		 disp();
	     fclose(fp);
	     printf("\tEnter the program to copy it into a text file\n");
		 scanf("%d",&n);
		 switch(n)
		 {
 			case 1 : fp=fopen("graphics\\test.c","r");
 			break;
 			case 2 : fp=fopen("graphics\\line.c","r");
 			break;
 			case 3 : fp=fopen("graphics\\circle.c","r");
 			break;
 			case 4 : fp=fopen("graphics\\ellipse.c","r");
 			break;
 			case 5 : fp=fopen("graphics\\rect.c","r");
 			break;
 			default : printf("Wrong Choice...");
 		 }
		 
				pp=fopen("graphics\\copy.txt","w");
				while(!feof(fp))
				{
				c=fgetc(fp);
				fputc(c,pp);
				}
				fclose(fp);
				fclose(pp);
				system("graphics\\copy.txt");
				break;
	case 5:
		  fp=fopen("graphics\\progs.txt","r");
		 disp();
	     fclose(fp);
	     printf("\tEnter the program to execute it\n");
		 scanf("%d",&n);
		 switch(n)
		 {
 			case 1 : system("graphics\\graphs.exe");
 			break;
 			case 2 : system("graphics\\graphs2.exe");
 			break;
 			case 3 : system("graphics\\graphs3.exe");
 			break;
 			case 4 : system("graphics\\graphs4.exe");
 			break;
 			case 5 : system("graphics\\graphs5.exe");
 			break;
 			default : printf("Wrong Choice...");
 		 }
 		 break;
 case 6 : 
 fp=fopen("graphics\\progs.txt","r");
		 disp();
	     fclose(fp);
	     printf("\tEnter the program to modify it\n");
		 scanf("%d",&n);
		 switch(n)
		 {
 			case 1 : system("graphics\\test.c");
 			break;
 			case 2 : system("graphics\\line.c");
 			break;
 			case 3 : system("graphics\\circle.c");
 			break;
 			case 4 : system("graphics\\ellipse.c");
 			break;
 			case 5 : system("graphics\\rect.c");
 			break;
 			default : printf("Wrong Choice...");
 		 }
 		 break;
 case 7 : editor();
  break;
 default : printf("Wrong Choice...");
	}
	printf("\n\n\t    want to go back? (yes-anykey/no-n) : ");
	c=getche();
	if(c!='n')
		graphics();
}
void dyanalloc()
{
	printf("\n\n~~~~~~~~~~~~~~~~THEORY~~~~~~~~~~~~~~~~ : \n");
	fp=fopen("dynamic_mem_alloc\\dynalloc.txt","r");
	disp();
	fclose(fp);
	p=print();
	switch(p)
	{
	     case 0: printf("---CLOSED---\n");
	     break;
		 case 1:  
		 fp=fopen("dynamic_mem_alloc\\progs.txt","r");
		 disp();
	     fclose(fp);
	     break;
	     case 2 : 
		 fp=fopen("dynamic_mem_alloc\\progs.txt","r");
		 disp();
	     fclose(fp);
		 printf("\tEnter your choice\n");
		 scanf("%d",&n);
		 switch(n)
 		 {
 		 	case 1 : fp=fopen("dynamic_mem_alloc\\search.c","r");
		             disp();
	     			fclose(fp);
	     			break;
	     	case 2 : fp=fopen("dynamic_mem_alloc\\marks.c","r");
		             disp();
	     			fclose(fp);
	     			break;		
 		  case 3 : fp=fopen("dynamic_mem_alloc\\data.c","r");
		            disp();
	     			fclose(fp);
	     			break;
	     case 4 : fp=fopen("dynamic_mem_alloc\\ebook.c","r");
		            disp();
	     			fclose(fp);
	     			break;
		case 5 : fp=fopen("dynamic_mem_alloc\\cost.c","r");
		             disp();
	     			fclose(fp);
	     			break;
		default : printf("Wrong Choice...");
 		 }
 		 break;
 		 case 3 : printf("Opening an Empty program in C editor\n");
 		 system("new.c");
 		 break;
 		 case 4:
		  fp=fopen("dynamic_mem_alloc\\progs.txt","r");
		 disp();
	     fclose(fp);
	     printf("\tEnter the program to copy it into a text file\n");
		 scanf("%d",&n);
		 switch(n)
		 {
 			case 1 : fp=fopen("dynamic_mem_alloc\\search.c","r");
 			break;
 			case 2 : fp=fopen("dynamic_mem_alloc\\marks.c","r");
 			break;
 			case 3 : fp=fopen("dynamic_mem_alloc\\data.c","r");
 			break;
 			case 4 : fp=fopen("dynamic_mem_alloc\\ebook.c","r");
 			break;
 			case 5 : fp=fopen("dynamic_mem_alloc\\cost.c","r");
 			break;
 			default : printf("Wrong Choice...");
 		 }
		 
				pp=fopen("dynamic_mem_alloc\\copy.txt","w");
				while(!feof(fp))
				{
				c=fgetc(fp);
				fputc(c,pp);
				}
				fclose(fp);
				fclose(pp);
				system("dynamic_mem_alloc\\copy.txt");
				break;
	case 5:
		  fp=fopen("dynamic_mem_alloc\\progs.txt","r");
		 disp();
	     fclose(fp);
	     printf("\tEnter the program to execute it\n");
		 scanf("%d",&n);
		 switch(n)
		 {
 			case 1 : system("dynamic_mem_alloc\\search.exe");
 			break;
 			case 2 : system("dynamic_mem_alloc\\marks.exe");
 			break;
 			case 3 : system("dynamic_mem_alloc\\data.exe");
 			break;
 			case 4 : system("dynamic_mem_alloc\\ebook.exe");
 			break;
 			case 5 : system("dynamic_mem_alloc\\cost.exe");
 			break;
 			default : printf("Wrong Choice...");
 		 }
 		 break;
 case 6 : 
 fp=fopen("dynamic_mem_alloc\\progs.txt","r");
		 disp();
	     fclose(fp);
	     printf("\tEnter the program to modify it\n");
		 scanf("%d",&n);
		 switch(n)
		 {
 			case 1 : system("dynamic_mem_alloc\\search.c");
 			break;
 			case 2 : system("dynamic_mem_alloc\\marks.c");
 			break;
 			case 3 : system("dynamic_mem_alloc\\data.c");
 			break;
 			case 4 : system("dynamic_mem_alloc\\ebook.c");
 			break;
 			case 5 : system("dynamic_mem_alloc\\cost.c");
 			break;
 			default : printf("Wrong Choice...");
 		 }
 		 break;
 case 7 : editor();
  break;
 default : printf("Wrong Choice...");
	}	
	printf("\n\t    want to go back? (yes-anykey/no-n) : ");
	c=getche();
	if(c!='n')
		dyanalloc();
}
void editor()
{
	printf("\n\n\t\t\t\t\t\t\t\t\t\tTEXT COLOR\t BACKGROUND COLOR");
	printf("\n\t\t\t\t\t\t\t\t\t\t1 - BLACK\t WHITE");
	printf("\n\t\t\t\t\t\t\t\t\t\t2 - BLACK\t RED");
	printf("\n\t\t\t\t\t\t\t\t\t\t3 - GREEN\t BLACK");
	printf("\n\t\t\t\t\t\t\t\t\t\t4 - RED \t YELLOW");
	printf("\n\t\t\t\t\t\t\t\t\t\t5 - WHITE\t BLUE");
	printf("\n\n\t\t\t\t\t\t\t\t\t\t  0 - DEFAULT COLORS");
	printf("\n\n\t\t\t\t\t\t\t\t\t\t Enter corresponding number : ");
	int ch;
	scanf("%d",&ch);
	switch(ch)
	{
		case 0: system("COLOR 07");break;
		case 1: system("COLOR F0");break;
		case 2: system("COLOR C0");break;
		case 3: system("COLOR 0A");break;
		case 4: system("COLOR EC");break;
		case 5: system("COLOR 97");break;
		default:printf("Wrong Choice entered....");
	}
}
