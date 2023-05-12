#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define MAX 10

int stack[MAX];
int top = -1;

void push(int element) {
    if (top == MAX-1) {
        printf("Stack Overflow!\n");
        return;
    }
    top++;
    stack[top] = element;
    printf("%d pushed to stack.\n", element);
}

int pop() {
    int element;
    if (top == -1) {
        printf("Stack Underflow!\n");
        return -1;
    }
    element = stack[top];
    top--;
    printf("%d popped from stack.\n", element);
    return element;
}

void display() {
    int i;
    if (top == -1) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Elements in stack are: ");
    for (i = top; i >= 0; i--)
        printf("%d ", stack[i]);
    printf("\n");
}

int main() {
    int choice, element;
    while (1) {
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter element to push: ");
                scanf("%d", &element);
                push(element);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}