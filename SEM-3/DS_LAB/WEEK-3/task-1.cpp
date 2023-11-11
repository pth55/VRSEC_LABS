// This Code is Contributed by PAVAN KUMAR BANDARU
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int top = -1, stack[SIZE];
void push(int n);
void pop();
void display();

int main()
{
	while(1){
		int choice;
		printf("\nSTACK OPERATIONS\n");
		printf("================\n");
		printf("1. PUSH\n2. POP\n3. DISPLAY\n4. EXIT\n");
		printf("Enter a Choice: ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				int ele;
				printf("\nEnter Element to Push: ");
				scanf("%d",&ele);
				push(ele);
				break;
			case 2:
				pop();
				break;
			case 3:
				printf("\nElements in Stack: ");
				display();
				break;
			case 4:
				printf("Bye,!!");
				exit(0);
			default:
				printf("\nInvalid Option!!\n");
		}
	}
	return 0;
}

void push(int n){
	if(top >= SIZE-1)
		printf("\nStack Overflow!! :(\n");
	else {
		stack[++top] = n;
		printf("\nElement %d Pushed!! :)\n", n);
	}
}

void pop() {
	if(top < 0)
		printf("\nStack Underflow!!\n");
	else
		printf("\n%d Poped!!\n", stack[top--]);
}

void display() {
	if (top < 0)
		printf("\nUnderflow!!\n");
	else {
		for (int i = top; i >= 0; i--) {
			printf("%d ", stack[i]);
		}
		printf("\n");
	}
}
