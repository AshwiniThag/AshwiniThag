#include<stdio.h>
#include<conio.h>
int main()
{
	struct emp;
	{
		
		int id;
		char name[10];
		int sal;
	}e1,e2;
	clrscr();
	printf("enter id name and salary of fist employee:");
	scanf("%d %s %d",e1.id,e1.name,e1.salary);
	printf("enter id name and salary of second employee:");
	scanf("%d %s %d",e2.id,e2.name,e2.salary);
	if(e1.sal>e2.sal)
	printf("highest salary:%s %d",e1.name,e1.salary);
	else if(e1.sal<e2.sal)
	printf("highest salary:%s %d",e2.name,e2.salary);
	else
	printf("both have same salary");
	return 0;
}
	
	
	

