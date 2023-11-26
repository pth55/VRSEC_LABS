#include <stdio.h> 
#include <stdlib.h> 

struct Node { 
	int data; 
	struct Node* next; 
}; 

void traverse(struct Node* head) 
{ 
	struct Node* temp = head; 
	if (head != NULL) { 
		do { 
			printf("%d ", temp->data); 
			temp = temp->next; 
		} while (temp != head); 
	} 
	printf("\n"); 
}

void insert(struct Node** head_ref, int data)
{ 

	struct Node* ptr1 = (struct Node*)malloc(sizeof(struct Node)); 
	ptr1->data = data; 
	ptr1->next = *head_ref;

	if (*head_ref != NULL) { 
		struct Node* temp = *head_ref; 
		while (temp->next != *head_ref) 
			temp = temp->next; 
		temp->next = ptr1;
	} 
	else
		ptr1->next = ptr1; 
	*head_ref = ptr1; 
} 

void delete(struct Node** head, int key) 
{ 
	if (*head == NULL) 
		return; 

	if ((*head)->data == key && (*head)->next == *head) { 
		free(*head); 
		*head = NULL; 
		return; 
	} 

	struct Node *last = *head, *d; 

	if ((*head)->data == key) { 
		while (last->next != *head) 
			last = last->next; 

		last->next = (*head)->next; 
		free(*head); 
		*head = last->next; 
		return; 
	} 

	while (last->next != *head && last->next->data != key) { 
		last = last->next; 
	} 

	if (last->next->data == key) { 
		d = last->next; 
		last->next = d->next; 
		free(d); 
	} 
	else
		printf("Given node is not found in the list!!!\n"); 
} 

int main() 
{ 
	struct Node* head = NULL;
	int opt = 0;
	do{
		printf("\nSingly Circular LL Operations\n");
		printf("-------------------------------\n");
		printf("1. Insert at Beginning.\n2. Delete Element\n3. Traverse.\n4. Exit.\n");
		printf("Choose an Option: ");
		scanf("%d", &opt);
		int n;
		if (opt == 1) {
			printf(">> Enter An Element to Insert at Beg.: ");
			scanf("%d",&n);
			insert(&head, n);
		} else if (opt == 2) {
			printf(">> Enter Element to Delete: ");
			scanf("%d",&n);
			delete(&head, n);
		} else if (opt == 3) {
			printf("List Elements: ");
			traverse(head);
		}
	}while(opt != 4);

	return 0; 
} 


