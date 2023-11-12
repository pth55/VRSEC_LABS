// 1.	Implementation of possible operations on Queue using arrays.
#include<stdio.h>
#define SIZE 5
int front = -1, rear = -1;
int queue[SIZE];
int isEmpty();
int isFull();
void enQueue(int);
void deQueue();
void display();

int main()
{
	int opt;
	printf("------ QUEUE OPERATIONS -----\n");
	do {
		printf("1. EN-QUEUE\n2. DE-QUEUE\n3. DISPLAY\n4. EXIT\nEnter Your Choice: ");
		scanf("%d",&opt);
		if(opt == 1){
			int n;
			printf(">> Enter an Element to Insert: ");
			scanf("%d",&n);
			enQueue(n);
		}
		else if(opt == 2){ deQueue(); }
		else if(opt == 3){ display(); }
	} while(opt != 4);
	return 0;
}

int isEmpty(){
	if (front == -1 && rear == -1)
		return 1;
	else
		return 0;
}

int isFull(){
	if(rear == SIZE-1)
		return 1;
	else
		return 0;
}

void enQueue(int n){
	if (isFull()){
		printf(">>Queue Overflow!!\n");
		return;
	}
	else if(isEmpty())
		front = rear = 0;
	else
		rear++;
	queue[rear] = n;
	printf(">> Element enQueued Successfully!\n");
}

void deQueue(){
	if(isEmpty())
		printf(">> Queue Underflow..\n");
	else if(front == rear){
		printf(">> The deQueued element is %d\n", queue[front]);
		front = rear = -1;
	}
	else {
		printf(">> The deQueued element is %d\n", queue[front]);
		front++;
	}
}

void display() {
	printf(">> Element in Queue: ");
	for(int i = front; i <= rear; i++)
		printf("%d ",queue[i]);
	printf("\n");
	// printf(">> front = %d, rear = %d\n", front, rear);
}
