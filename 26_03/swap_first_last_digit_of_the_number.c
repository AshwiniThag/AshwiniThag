#include<stdio.h>
#include<conio.h>

void main(){
	int n,first,last,temp;
	
	printf("\n Enter the number :- ");
	scanf("%d",&n);
	
	last = n % 10;
	
	first = n;
	
	while(first >=10){
		first = first/10;
	}
	
	printf("\n Before Swap the Number = %d ",n);
	
	temp = first;
	first = last;
	last = temp;
	
	
	printf("\n After Swap the Number = %d ",n);
}