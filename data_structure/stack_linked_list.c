#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node *link;
} *top = NULL;

void push() {
    struct node *temp;
    int pushed_item;
    temp = (struct node *)malloc(sizeof(struct node));

    if (temp == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }

    printf("Input the new value to be pushed on the stack: ");
    scanf("%d", &pushed_item);
    temp->info = pushed_item;
    temp->link = top;
    top = temp;
}

void pop() {
    struct node *temp;
    if (top == NULL) {
        printf("Stack is empty!\n");
    } else {
        temp = top;
        printf("Popped item is %d\n", temp->info);
        top = top->link;
        free(temp);
    }
}

void display() {
    struct node *ptr;
    ptr = top;

    if (top == NULL) {
        printf("Stack is empty!\n");
    } else {
        printf("Stack elements:\n");
        while (ptr != NULL) {
            printf("%d\n", ptr->info);
            ptr = ptr->link;
        }
    }
}

int main() {
    int choice;

    printf("====================================================\n");
    printf("******** STACK IMPLEMENT USING LINKED LIST ********\n");
    printf("====================================================\n");

    while (1) {
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Display\n");
        printf("4.Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
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
                printf("Quitting....\n");
                exit(0);

            default:
                printf("Wrong choice!\n");
        }
    }    return 0;
}
