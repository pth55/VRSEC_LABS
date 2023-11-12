// 3.	Implementation of possible operations on circular queue using arrays.
#include<stdio.h>
#define mod %
#define SIZE 5
// Global Declarations
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
	printf("~~~~~~ CIRCULAR QUEUE OPERATIONS ~~~~~\n");
	do {
		printf("1. EN-QUEUE\n2. DE-QUEUE\n3. DISPLAY\n4. EXIT\nEnter Your Choice: ");
		scanf("%d",&opt);
		if(opt == 1){
			int n;
			printf(">> Enter an Element to Insert: ");
			scanf("%d",&n);
			enQueue(n);
		} else if(opt == 2){
			deQueue();
		} else if(opt == 3){
			display();
		}
	} while(opt != 4);
	return 0;
}

int isEmpty(){
	if ((front == -1) && (rear == -1))
		return 1;
	else
		return 0;
}

int isFull(){
	if((rear+1)%SIZE == front)
		return 1;
	return 0;
}

void enQueue(int n){
	if(isFull()){
		printf(">> Queue is overflow..\n");
	}
	else if(isEmpty()) {  
	        front=0; 
	        rear=0;
	        queue[rear]=n;
	        printf(">> Element Inserted Successfully!!\n");
    	}
	else {
		rear = (rear + 1)%SIZE;
		queue[rear] = n;
		printf(">> Element Inserted Successfully!!\n");
	}
}

void deQueue(){
	if(isEmpty()){
		printf("\n>> Queue is Underflow..\n");
	}
	else if(front == rear){
		printf("\n>> The dequeued element is %d\n", queue[front]);  
		front = rear = -1;
	}
	else {
		printf("\n>> The dequeued element is %d\n", queue[front]); 
		front = (front+1)%SIZE;
	}
}
void display() {
    	printf(">> Elements in Queue: ");
	for(int i = front; i <= rear; i++)
		printf("%d ",queue[i]);
	printf("\n");
	printf(">> front = %d & rear = %d\n", front, rear);
}
