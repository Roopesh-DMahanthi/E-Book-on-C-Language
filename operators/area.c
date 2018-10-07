#include<stdio.h>
#include<conio.h>
void main()
{
	float r,l,b,h,ba,arc,arr,art;
	printf("enter radius of circle- ");
	scanf("%f",&r);
	printf("enter length and breadth of rectangle- ");
	scanf("%f%f",&l,&b);
	printf("enter base and height of triangle- ");
	scanf("%f%f",&h,&ba);
	arc=3.14*r*r;
	arr=l*b;
	art=0.5*h*ba;
	printf("Area of circle= %f\n",arc);
	printf("Area of rectangle= %f\n",arr);
	printf("Area of traingle= %f\n",art);
	getch();
}
