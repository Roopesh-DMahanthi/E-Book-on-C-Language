#include<stdio.h>
main()
{
	int n,a[10],i,j,temp;
	printf("enter the no. of elements in the array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
			
	}
	printf("\nafter sorting : ");
	for(i=0;i<n;i++)
	printf("\nthe array elements are : %d",a[i]);
}
