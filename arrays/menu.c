#include<stdio.h>
#include<conio.h>
int ar[20];
int i;
void lsearch();
void bsearch();
void bsort();
int issort();
void main()
{
    int choice;
    printf("enter elements to store in an array\n");
    for(i=0;i<5;i++)
    {
	scanf("%d",&ar[i]);
    }
    printf("----------choice----------\n");
    printf("1 - linear search an element\n2 - binary search an element\n3 - bubble sort the array\n4 - check array is sorted or not\nenter your choice");
    scanf("%d",&choice);
    
    switch(choice)
    {
    	case 1: lsearch();
    	        break;
        case 2: if(issort()!=0)
		        bsearch();
		        else
		        {
        			bsort();
        			bsearch();
        		}
    	        break;
        case 3: bsort();
        printf("printing sorted array \n");
		for(i=0;i<5;i++)
		{
			printf("%d -- %d\n",i+1,ar[i]);
		}
    	        break;
        case 4: if(issort()!=0)
		        printf("array is sorted");
		        else
		        printf("array is not sorted");
    	        break;
        default: printf("wrong choice");
    }
    
}
void lsearch()
{
	int s,r=0;
	printf("enter number to be checked");
	scanf("%d",&s);
	for(i=0;i<5;i++)
	{
		if(s==ar[i])
		{
			r=i;
			break;
		}
	}
	if(r>0)
	printf("element %d is found at index %d in the array",s,r);
	else
	printf("element not found");
}
void bsearch()
{
	int s,r=0,low=0,mid,high=4;
	printf("enter number to be checked");
	scanf("%d",&s);
	while(low<=high)
	{
		mid=(low+high)/2;
		if(s==ar[mid])
		{
			r=mid;
			break;
		}
		else if(s<ar[mid])
			high=mid-1;
		else if(s>ar[mid])
		    low=mid+1;
	}
	if(r>0)
	printf("element %d is found at index %d in the array",s,r);
	else
	printf("element not found");
}
void bsort()
{
	int temp,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		{
			if(ar[j]>ar[j+1])
			{
			temp=ar[j+1];
			ar[j+1]=ar[j];
			ar[j]=temp;
			}

		}
	}
		
}
int issort()
{
	int x=0;
	for(i=0;i<5;i++)
	{
		if(ar[i]<ar[i+1])
		x++;
	}
	return x;
}
