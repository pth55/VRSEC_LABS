// Algorithm
// =========
// 1. Find the length of the string say len. Now, find the mid as mid = len / 2.
// 2. Push all the elements till mid into the stack i.e. str[0…mid-1].
// 3. If the length of the string is odd then neglect the middle character.
// 4. Till the end of the string, keep popping elements from the stack and compare them with the current character i.e. string[i].
// 5. If there is a mismatch then the string is not a palindrome. If all the elements match then the string is a palindrome.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* stack;
int top = -1;

void push(char ele){stack[++top] = ele;}
char pop(){return stack[top--];}

int isPalindrome(char str[])
{
    int length = strlen(str);
    stack = (char*)malloc(length * sizeof(char));
 
    // Finding the mid
    int i, mid = length / 2;
 
    for (i = 0; i < mid; i++) {
        push(str[i]);
    }

    if (length % 2 != 0) {
        i++;
    }

    while (str[i] != '\0') {
        char ele = pop();
        if (ele != str[i])
            return 0;
        i++;
    }
    return 1;
}

int main() {
    while(1){
        int choice;
        printf("PALINDROME STRING\n");
        printf("-----------------\n");
        printf("1. Check Palindrome or Not\n2. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                char ch[10];
                // fgets(ch, SIZE, stdin);
                printf("Enter a String: ");
                scanf("%s", ch);
                if (isPalindrome(ch)) {
                    printf("%s is Palindrome!",ch);
                    printf("\n");
                }
                else {
                    printf("Not Palindrome!\n");
                }
                break;
            case 2:
                exit(0);
                //break;
            default:
                printf("Invalid Option!!\n");
                //break;
        }
    }
    return 0;
}
