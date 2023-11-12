// This Code is Contributed by PAVAN KUMAR BANDARU

#include<stdio.h>
#define SIZE 10
int top = -1, stack[SIZE];
int push(int n);
int pop();
void display();

int main() {
	int n;
	printf("Enter a Decimal Number: ");
	scanf("%d", &n);
	int temp = n;
	while(temp > 0){
		push((temp%2));
		temp /= 2;
	}	
	printf("%d in Binary: ", n);
	display();
	return 0;
}

int push(int n){
	if(top >= (SIZE-1))
		return -1;
	else {
		stack[++top] = n;
		return 0;
	}
}

int pop() {
	if(top < 0)
		return top;
	else
		return stack[top--];
}

void display() {
	int temp = top;
	if(top < 0)
		printf("Underflow\n");
	else {
		for (int i = top; i >= 0; i--) {
			printf("%d ",stack[i]);
		}
		printf("\n");
	}
	top = temp;
}
