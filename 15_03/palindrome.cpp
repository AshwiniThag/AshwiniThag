#include<stdio.h>
int main()
{
	int age;
	printf("enter age:\n");
	scanf("%d",&age);
	if(age>18)
	{
		printf("congratulation!!! you are eligible for casting your vote.");
	}
	else
	{
	printf("congratulation!!! you are  not eligible for casting your vote.");	
	}
	return 0;
}
