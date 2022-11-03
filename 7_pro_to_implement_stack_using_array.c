#include<stdio.h>

int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
void display (void);
int main(){
	top = - 1 ;
	printf("\n Enter the size of STACK [MAX=100]:");
	scanf("%d",&n);
	printf("\n\t STACK OPERATIONS USING ARRAY");
	printf("\n\t-----------------------");
	printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");
	do{
		printf("\n Enter Your Choice:-");
		scanf("\%d",&choice);
		switch(choice){
		case 1:{
			push();
			break;
		}
		case 2:{
			pop();
			break;
		}
		case 3:{
			display();
			break;
		}
		case 4:{
			printf("\n\t SEE YOU SOON");
			break;
		}
		default:{
			printf("\n\t Enter a Valid Choice");
		}
		}
	}while(choice!=4);
	return 0;
}

void push(){
	if(top>=n-1) {
		printf("\n\tSTACK is over flow");
	}
	else{
		printf("\tEnter a value to be pushed:");
		scanf("%d", &x); 
		top++;
		stack[top]=x;
	}
}

void pop(){
	if(top<=-1){
		printf("\n\tSTACK is under flow");
	}
	else{
		printf("\n\t The popped elements is %d", stack[top]);
		top--;
	}
}

void display(){
	if(top>=0){
		printf("\n\t The elements in STACK is");
		for(i=top; i>=0; i--){
			printf("\n\t\t%d", stack[i]);
		}
	}
	else{
		printf("\n The STACK is empty");
	}
}