#include<stdio.h>
#include<conio.h>

void main(){
	int base,expo;
	float res=1.0;
	printf("\n Enter the base :- ");
	scanf("%d",&base);
	
	printf("\n Enter the exponent :- ");
	scanf("%d",&expo);
	
	while(expo != 0){
		res *= base;
		expo--;
	}
	printf("\n Answer = %.2f",res);
	
}