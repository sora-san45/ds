#include<stdio.h>
#define MAX 10

void main(){
	int a[5][5],b[MAX+1][3],k,r,c;
	printf("Enter the order of the matrix : ");
	scanf("%d%d",&r,&c);
	printf("Enter the matrix : ");
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	b[0][0]=r;
	b[0][1]=c;
	k=1;
	
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(a[i][j]!=0){
				b[k][0]=i;
				b[k][1]=j;
				b[k][2]=a[i][j];
				k++;
			}
		}
	}
	
	b[0][2]=k-1;
	
	printf("Triplet Representaion\n");
	for (int i=0;i<k;i++){
		printf("%d\t%d\t%d\n",b[i][0],b[i][1],b[i][2]);
		
	}
}
