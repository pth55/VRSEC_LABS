#include<stdio.h>
#include<stdlib.h>

struct Node {
    struct Node *prev;
    int data;
    struct Node *next;
};

void traverse(struct Node *head) {
    if (head == NULL) {
        printf("\nLinked List is Empty!\n");
    } else {
        while (head != NULL) {
            printf("%d ", head->data);
            head = head->next;
        }
        printf("\n");
    }
}

struct Node* addToEmpty(struct Node* head, int n) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->prev = NULL;
    temp->data = n;
    temp->next = NULL;
    head = temp;
    return head;
}

struct Node* addAfterPos(struct Node* head, int data, int pos) {
    struct Node* newP = (struct Node*)malloc(sizeof(struct Node));
    newP->data = data;
    struct Node* temp = head;
    struct Node* temp2 = NULL;

    while (pos != 1) {
        temp = temp->next;
        pos--;
    }

    if (temp->next == NULL) {
        temp->next = newP;
        newP->prev = temp;
    } else {
        temp2 = temp->next;
        temp->next = newP;
        temp2->prev = newP;
        newP->next = temp2;
        newP->prev = temp;
    }

    return head;
}

struct Node* deletePos(struct Node* head, int pos) {
    struct Node* temp = head;
    struct Node* temp2 = NULL;

    if (pos == 1) {
        temp2 = head;
        head = head->next;
        if (head != NULL) {
            head->prev = NULL;
        }
        free(temp2);
    } else {
        int count = 1;
        while (count < pos && temp != NULL) {
            temp = temp->next;
            count++;
        }

        if (temp != NULL) {
            temp2 = temp->prev;
            temp2->next = temp->next;
            if (temp->next != NULL) {
                temp->next->prev = temp2;
            }
            free(temp);
        } else {
            printf("\nPosition %d does not exist in the list.\n", pos);
        }
    }

    return head;
}

int main() {
    struct Node* head = NULL;
	head = addToEmpty(head, 10);
    int opt = 0;
	do{
		printf("\nDoubly LL Operations\n");
		printf("-------------------------------\n");
		printf("1. Insert Element.\n2. Delete Element\n3. Traverse.\n4. Exit.\n");
		printf("Choose an Option: ");
		scanf("%d", &opt);
		int n, pos;
		if (opt == 1) {
			printf(">> Enter An Element to Insert at After Pos.(ele, pos): ");
			scanf("%d%d",&n,&pos);
			head = addAfterPos(head, n, pos);
		} else if (opt == 2) {
			printf(">> Enter Element Position to Delete: ");
			scanf("%d",&pos);
			head = deletePos(head, pos);
		} else if (opt == 3) {
			printf("List Elements: ");
			traverse(head);
		}
	}while(opt != 4);
    return 0;
}
