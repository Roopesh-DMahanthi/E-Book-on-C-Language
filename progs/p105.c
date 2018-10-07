#include<stdio.h>
int v=10;
int main()
{
	call1();
	call2();
	printf("\nIn Main()  V=%d",v);
}
call1()
{
	int v=20;
	printf("\nIn Call1() V=%d",v);
}
call2()
{
	printf("\nIn call2() V=%d",v);
}/*work of auto n global with same variable name*/