#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int top = -1;  // Initialize top to -1 for an empty stack
int stack_arr[MAX];

// Function prototypes
void push();
void pop();
void display();

int main() {
    int choice;
    
    while(1) {
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Quit\n");
        printf("Enter your Choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                push();
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
                printf("Wrong Choice\n");
        }
    }
    return 0;
}

void push() {
    int pushed_item;

    if (top == MAX - 1) {
        printf("Stack overflow\n");
    } else {
        printf("Enter the item to be pushed in the stack: ");
        scanf("%d", &pushed_item);
        top = top + 1;
        stack_arr[top] = pushed_item;
    }
}

void pop() {
    if (top == -1) {
        printf("Stack underflow\n");
    } else {
        printf("Popped element is: %d\n", stack_arr[top]);
        top = top - 1;
    }
}

void display() {
    int i;

    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements: \n");
        for(i = top; i >= 0; i--) {
            printf("%d\n", stack_arr[i]);
        }
    }
}
