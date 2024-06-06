#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5];
	int i,max,size;
	printf("enter size of array:");
	scanf("%d",&size);
	printf("enter array elements:\n");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<5;i++)
	int max=a[0];
	{
		if(a[i]>max)
		{
			max=a[i];
		
		}
		printf("maximum number is %d",max);
		getch();
	}
	
	
}
