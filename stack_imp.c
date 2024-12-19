#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 100

int stack[MAX];
int top = -1;

bool isEmpty() {
    return top == -1;
}

bool isFull() {
    return top >= MAX - 1; // Corrected to check against MAX - 1
}

void push() {
    int value;
    if (isFull()) {
        printf("Stack is full\n");
    } else {
        printf("Enter push item: ");
        scanf("%d", &value);
        stack[++top] = value; // Increment top and assign in one step
        printf("%d pushed to stack\n", value);
    }
}

void pop() {
    if (isEmpty()) {
        printf("Stack is empty\n");
    } else {
        printf("%d is popped out\n", stack[top--]); // Use post-decrement
    }
}

void display() {
    if (isEmpty()) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements:\n");
        for (int i = 0; i <= top; i++) {
            printf("stack[%d] = %d\n", i + 1, stack[i]);
        }
    }
}

void peek() {
    if (isEmpty()) {
        printf("Stack is empty\n");
    } else {
        printf("Top element is: %d\n", stack[top]);
    }
}

int main() {
    int opt;
    do {
        printf("\n..................\n");
        printf("1) PUSH\n");
        printf("2) POP\n");
        printf("3) PEEK\n");
        printf("4) DISPLAY\n");
        printf("5) QUIT\n");
        printf("..................\n");
        printf("Choose your option: ");
        scanf("%d", &opt);
        switch (opt) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid operation! Try again...\n");
        }
    } while (true);
    
    return 0;
}

