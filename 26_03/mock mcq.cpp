#include<stdio.h>
int main()
{
	int a[8];
	int n=0;
	while(n<8)
	{
		a[n]=++n;
	}
	for(n=0;n<8;n++)
	{
		printf("%d",a[n]);
		
	}
	return 0;
}
