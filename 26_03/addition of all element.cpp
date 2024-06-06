#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],i,sum=0;
	printf("enter array elements:\n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=4;i++)
	{
		sum=sum+a[i];
		
	
	}
	printf("sum of all array element is %d ",sum);
	getch();
}
