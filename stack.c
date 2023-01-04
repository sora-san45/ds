#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int stack[MAX],top=-1;

void push(int item){
	if(isFull()){
		printf("Stack Overflow");
		return;
	}
	top=top+1;
	stack[top]=item;
}

int pop(){
	int item;
	if(isEmpty()){
		printf("Trying to pop from an empty stack");
		exit(1);
	}
	item=stack[top];
	top=top-1;
	return item;
}

int isEmpty(){
	if(top==-1)
		return 1;
	else
		return 0;
	
}

int isFull(){
	if(top==MAX-1)
		return 1;
	else
		return 0;
}

void display(){
	if(isEmpty()){
		printf("Stack is empty");
		return;
	}
	printf("\nStack Elements are : \n");
	for(int i=top;top>=0;i--){
		printf("%d\n",stack[i]);
	printf("\n");
	}
}

void main(){

	int choice,item;
	while(1){
		printf("\n1.Push\n");
		printf("\n2.Pop\n");
		printf("\n3.Display\n");
		printf("\n4.Exit\n");
		printf("Enter Your Choice: "); 	
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Enter item to be pushed: ");
				scanf("%d",&item);
				push(item);
				break;
			case 2:	
				item=pop();
				printf("Popped Item is : ",item);
				break;
			case 3:
				printf("Displaying the stack : ");
				display();
				break;
			case 4:
				exit(1);
			default:
				printf("Wrong Choice ");
		}					
	}
	

}



























