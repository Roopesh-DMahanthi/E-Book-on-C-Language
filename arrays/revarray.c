#include<stdio.h>
main()
{
	int n,a[10],i,temp;
	printf("enter the no. of elements in the array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n/2;i++)
	{
		temp=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=temp;
	}
	printf("\nafter reversing : ");
	for(i=0;i<n;i++)
	printf("\nthe array elements are : %d",a[i]);
}
