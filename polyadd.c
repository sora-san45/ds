#include<stdio.h>
#include<stdlib.h>
#define MAXD 10

void readpoly(float p[],int d){
	for( int i=d;i>=0;i--){
		scanf("%f",&p[i]);
	}
}

void printpoly(float p[],int d){
	for (int i=d;i>=0;i--){
		if(p[i]!=0){
			if(i==d){
				printf("%.2fX^%d ",p[i],i);
			}
			else if(i==1){ 
				printf("+%2.fX ",p[i]);
			}
			else if(i==0){
				printf("+%.2f ",p[i]);
			}
			else{
				printf("+%.2fX^%d ",p[i],i);
			}
		}
	}
}

int addpoly(float p1[],float p2[],float p3[],int d1,int d2){
	int d3;
	d3=d1>d2?d1:d2;
	for(int i=0;i<=d3;i++){
		p3[i]=p1[i]+p2[i];
	}
}

void main(){
	float p1[MAXD+1]={0.0},p2[MAXD+1]={0.0},p3[MAXD+1]={0.0};
	int d1,d2,d3;
	printf("\nEnter degree of first and second polynomial :\n");
	scanf("%d%d",&d1,&d2);
	if(d1<1 || d2<1 || d1>MAXD || d2>MAXD){
		printf("Invalid Inpput");
		exit(0);
	}
	
	printf("\nEnter coefficients of first polynomial\n");
	readpoly(p1,d1);
	
	printf("\nEnter coefficients of second polynomial\n");
	readpoly(p2,d2);
	
	d3=addpoly(p1,p2,p3,d1,d2);
	
	printf("\nPolynomial 1: ");
	printpoly(p1,d1);
	
	printf("\nPolynomial 2: ");
	printpoly(p2,d2);
	
	printf("\nSum is : ");
	printpoly(p3,d3);
	

}





























