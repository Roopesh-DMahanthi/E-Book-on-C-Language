#include<stdio.h>
#include<conio.h>
void main() 
{
	int att,ca,mtt,ete,r;
	printf("Enter your Attendance, CA marks,MTT and ETE score\n");
	scanf("%d%d%d%d",&att,&ca,&mtt,&ete);
	r=(((att+ca+mtt+ete)>=40) && ((ete+mtt)>=30 || (ete)>=30));
	if(r=1)
	printf("you are qualified");
	else
	printf("you are disqualified");
	getch();
}
