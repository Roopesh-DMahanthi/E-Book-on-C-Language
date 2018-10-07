#include<stdio.h>
void call1();
void call2();
int main()
{
	auto int v=10;
	call2();
	printf("\nV=%d",v);
}
void call1()
{
	auto int v=20;
	printf("\nV=%d",v);
}
void call2()
{
	auto int v=30;
	call1();
	printf("\nV=%d",v);
}/*working of auto*/