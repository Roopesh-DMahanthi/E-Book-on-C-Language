#include<stdio.h>
int main()
{
	int x=10;
	printf("\n X=%d",x);
	{
		float x=2.22;
		printf("\n X=%g",x);
	}
    {
	    char *x="auto storage classes";
        printf("\n X=%s",x);
    }
    printf("\n X=%d",x);
}