#include<stdio.h>
#include<stdlib.h>

struct Node {
	int data;
	struct Node *next;
};

void traverse(struct Node *head){
	if (head == NULL){
		printf("\nLinked List is Empty!\n");
	}
	else{
		while(head != NULL) {
			printf("%d ", head->data);
			head = head->next;
		}
		printf("\n");
	}
}


void insert_at_aft(int n, int pos, struct Node *ptr) {
	struct Node *newN = malloc(sizeof(struct Node));
	newN->data = n;
	newN->next = NULL;

	while(ptr->data != pos) {
		ptr = ptr->next;
	}
	
	newN->next = ptr->next;
	ptr->next = newN;
	printf("Element Inserted!.\n");
}

void delete_at_aft(int pos, struct Node *ptr) {
	while((ptr->next)->data != pos){
		ptr = ptr -> next;
	}
	struct Node *ptr2 = ptr->next;
	ptr->next = ptr2->next;
	printf("%d Deleted!!\n", pos);
	free(ptr2);
	ptr2 = NULL;
}

int main() {
	struct Node *head = malloc(sizeof(struct Node));
	head->data = 100;
	head->next = NULL;

	struct Node *ptr = malloc(sizeof(struct Node));
	ptr->data = 200;
	ptr->next = NULL;
	head->next = ptr;

	ptr = malloc(sizeof(struct Node));
	ptr->data = 300;
	ptr->next = NULL;
	head->next->next = ptr;

	int opt = 0;
	do{
		printf("\nLinked List Operations\n");
		printf("----------------------\n");
		printf("1. Insert After...\n2. Delete After...\n3. Traverse.\n4. Exit.\n");
		printf("Choose an Option: ");
		scanf("%d", &opt);
		int n, pos;
		if (opt == 1) {
			printf(">> Enter An Element to Insert after (ele, pos): ");
			scanf("%d%d",&n,&pos);
			insert_at_aft(n, pos, head);
		} else if (opt == 2) {
			printf(">> Enter Element to Delete: ");
			scanf("%d",&pos);
			delete_at_aft(pos, head);
		} else if (opt == 3) {
			printf("List Elements: ");
			traverse(head);
		}
	}while(opt != 4);
	return 0;
}
