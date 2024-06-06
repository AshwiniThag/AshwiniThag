#include<stdio.h>
int main()
{
	int principal,rate,year,SI;
	printf("enter principal rate and year\n");
	scanf("%d%d%d",&principal,&rate,&year);
	SI=(principal*rate*year)/100;
	printf("simple intrest =%d",SI);
	return 0;
	
	
}
