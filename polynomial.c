#include<stdio.h>
#define MAXD 10
void main(){
	float pol[MAXD+1];
	int d;
	printf("Enter the degree : ");
	scanf("%d",&d);
	if (d<1 || d>10){
		printf("\nThe degree should be atleast than 1 or less than 10\n");
	}	
	else{
		printf("\nEnter the coefficients of the polynomial starting from X^%d\n",d);	
		for( int i=d;i>=0;i--){
			scanf("%f",&pol[i]);			
		} 
	}
	printf("\nThe Polynomial Is : \n");
	for(int i=d;i>=0;i--){
		if(pol[i]!=0){
			if(i==d){
				printf("%.2fX^%d ",pol[i],i);
			}
			else if(i==1){ 
				printf(" +%2.fX ",pol[i]);
			}
			else if(i==0){
				printf(" +%.2f ",pol[i]);
			}
			else{
				printf(" +%.2fX^%d ",pol[i],i);
			}
		}
	}
} 
