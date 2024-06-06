#include<stdio.h>
#include<conio.h>

void main(){
 	int num,count=0;
 	
 	printf("\n Enter the number :- ");
 	scanf("%d",&num);
 	
 	while(num>0){
 		count++;
 		num = num/10;
	}
	printf("\n No of.digits = %d",count);
}
