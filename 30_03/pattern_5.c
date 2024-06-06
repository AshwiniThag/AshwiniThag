#include<stdio.h>
#include<conio.h>

void main(){
	int i,j;
	
	for(i=5;i<=1;i--){
		for(j=9;j<=1;j--){
			if(j<=6+i && j>=4+i){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
// *********
//  *******
//   *****
//    ***
//     *

