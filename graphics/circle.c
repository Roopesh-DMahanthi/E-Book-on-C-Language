#include<stdio.h>
#include <graphics.h>
int main( )
{
    int gd=DETECT,gm,x,y;
    initgraph(&gd,&gm,"c:\bgi");
    settextstyle(10,0,20);
    circle(200,200,100);
	getch();
    closegraph();
    restorecrtmode();
    return 0;
}
