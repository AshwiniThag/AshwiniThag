#include<stdio.h>
int main()
{
	char ch;
	printf("enter character:");
	scanf("%c",&ch);
	(ch=='E')?printf("excellent"):(ch=='V')?printf("very good"):printf("wrong input");
	return 0;
}
	
