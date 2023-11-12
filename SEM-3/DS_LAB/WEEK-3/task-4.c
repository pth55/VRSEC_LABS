#include <stdio.h>
#include <stdlib.h>
#define SIZE 20
int top = -1;
char stack[SIZE];

void push(char ch) {
    if(top <= SIZE-1){stack[++top] = ch;}
    else {printf("\nStack Overflow!!\n");}
}

void display() {
    int temp = top;
    while(temp >= 0){
        printf("%c",stack[temp--]);
    }
    printf("\n");
}

int main() {
    char ch[SIZE];
    printf("Enter a String: ");
    fgets(ch, SIZE, stdin);
    int i = 0;
    while(ch[i] != '\0'){
        push(ch[i]);
        i += 1;
    }
    printf("Revered String: ");
    display();
    return 0;
}
