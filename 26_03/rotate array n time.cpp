#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n,temp,size;
	printf("enter size of array:");
	scanf("%d",&size);
	int a[size];
	printf("enter element of array:\n");
	for(i=0;i<size;i++)
	{
	  scanf("%d",&a[i]);
	}
	printf("enter element of array:");
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nenter n=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		temp=a[0];
		for(j=0;j<size;j++)
		{
			a[j]=a[j+1];
		}
		a[size-1]=temp;
	}
	printf("display array");
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
		
	}
	
}
