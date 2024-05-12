
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct stack {
    int data;
    struct stack *next;
} stack;

void push(stack **s, int n) {
    stack *q;
    q = (stack*)malloc(sizeof(stack));
    q->data = n;
    q->next = *s;
    *s = q;
}

int pop(stack **s) {
    stack *r;
    int temp;
    if (*s == NULL) {
        printf("Null list! Can't pop any data\n");
        return -1;
    }
    else {
        r = *s;
        temp = r->data;
        *s = r->next;
        free(r);
    }
    return temp;
}

int peek(stack *s) {
    if (s == NULL) {
        return -1;
    }
    else {
        return s->data;
    }
}

void isempty(stack *s) {
    if (s == NULL) {
        printf("The stack is empty\n");
    }
    else {
        printf("The stack is not empty\n");
    }
}

void display(stack *s) {
    if (s == NULL) {
        printf("Null list\n");
    }
    else {
        do {
            printf("%d\n", s->data);
            s = s->next;
        } while (s != NULL);
    }
}

int main() {
    stack *st = NULL;
    int choice, num, p;
    printf("Program to implement stack using linked list\n");
    printf("===============================================");
    do {
        printf("\n1. push");
        printf("\n2. pop");
        printf("\n3. peek");
        printf("\n4. isempty");
        printf("\n5. display");
        printf("\n6. exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the data: \n");
                scanf("%d", &num);
                push(&st, num);
                break;
            case 2:
                p = pop(&st);
                if (p != -1) {
                    printf("Popped element: %d\n", p);
                }
                break;
            case 3:
                p = peek(st);
                if (p == -1) {
                    printf("Null list!\n");
                }
                else {
                    printf("Peek is: %d\n", p);
                }
                break;
            case 4:
                isempty(st);
                break;
            case 5:
                display(st);
                break;
            case 6:
                printf("\nQuitting....\n");
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    } while (1);

    return 0;
}
