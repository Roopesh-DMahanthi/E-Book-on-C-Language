#include<stdio.h>
#include <graphics.h>
int main( )
{
    int gd=DETECT,gm,x,y;
    initgraph(&gd,&gm,"c:\bgi");
    settextstyle(10,0,20);
    outtextxy(0,120,"Roopesh");
	getch();
    closegraph();
    restorecrtmode();
    return 0;
}
