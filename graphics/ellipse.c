#include<conio.h>
#include<graphics.h>
int main()
{
	int gd=DETECT,gm;
	int x,y,radius=80;
	initgraph(&gd,&gm,"c:\bgi");
	x=getmaxx()/2;
	y=getmaxy()/2;
	outtextxy(x-100,50,"ELLIPSE using graphics in C");
	ellipse(x,y,0,360,120,60);
	getch();
	closegraph();
	return 0;
}

