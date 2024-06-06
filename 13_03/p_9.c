#include<stdio.h>
#include<conio.h>


void main(){
	
	double p,r,t,s;
	
	printf("Enter the Value Of P,R,N :-");
	scanf("%lf%lf%lf",&p,&r,&t);
	
	s = p*r*t/100;
	
	printf("Simple Intrest is :- %lf",s);
	
	getch();
}
