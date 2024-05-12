#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

int main() {
    struct node* head = NULL, *temp = NULL, *newnode = NULL;
    printf("Create linked list.....\n");
    int c = 1;
    while (c) {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if (head == NULL) {
            head = temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }
        printf("Do you want to add more nodes (0/1): ");
        scanf("%d", &c);
    }

    struct node* prevnode = NULL, *currentnode = NULL, *nextnode = NULL;
    prevnode = NULL;
    currentnode = nextnode = head;

    while (nextnode != NULL) {
        nextnode = nextnode->next;
        currentnode->next = prevnode;
        prevnode = currentnode;
        currentnode = nextnode;
    }

    head = prevnode;

    printf("All data of linked list.....\n");
    temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    // Free memory allocated for nodes
    temp = head;
    while (temp != NULL) {
        struct node* next = temp->next;
        free(temp);
        temp = next;
    }

    return 0;
}
