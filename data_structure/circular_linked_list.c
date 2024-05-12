#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct node {
    int data;
    struct node *next;
} node;

void cinsert_begin(node **p, int n)
{
    node *q = (node *)malloc(sizeof(node));
    q->data = n;

    if (*p == NULL) {
        q->next = q;
        *p = q;
    } else {
        node *r = *p;
        while (r->next != *p) {
            r = r->next;
        }
        r->next = q;
        q->next = *p;
        *p = q;
    }
}

void cdisplay(node *p)
{
    node *r = p;

    if (p == NULL) {
        printf("NULL LIST");
    } else {
        do {
            printf("%d ", r->data);
            r = r->next;
        } while (r != p);
    }
}

int ccounter(node *p)
{
    int c = 0;

    if (p == NULL) {
        return c;
    } else {
        node *r = p;
        do {
            c++;
            r = r->next;
        } while (r != p);
        return c;
    }
}

void cinsert_end(node **p, int n)
{
    node *q = (node *)malloc(sizeof(node));
    q->data = n;

    if (*p == NULL) {
        q->next = q;
        *p = q;
    } else {
        node *r = *p;
        while (r->next != *p) {
            r = r->next;
        }
        r->next = q;
        q->next = *p;
    }
}

void cinsert_nth(node **p, int n, int pos)
{
    node *q, *r = *p;
    int i;
    q = (node *)malloc(sizeof(node));
    q->data = n;

    if (pos == 1) {
        if (*p == NULL) {
            q->next = q;
            *p = q;
        } else {
            while (r->next != *p) {
                r = r->next;
            }
            r->next = q;
            q->next = *p;
            *p = q;
        }
    } else {
        for (i = 0; i < pos - 2; i++) {
            r = r->next;
        }
        q->next = r->next;
        r->next = q;
    }
}

void cdelete_beg(node **p)
{
    node *r, *q;

    if (*p == NULL) {
        printf("Null list! Deletion not possible.");
    } else if ((*p)->next == *p) {
        free(*p);
        *p = NULL;
    } else {
        r = *p;
        *p = r->next;
        q = *p;
        while (q->next != r) {
            q = q->next;
        }
        q->next = *p;
        free(r);
    }
}

void cdelete_end(node **p)
{
    node *r;

    if (*p == NULL) {
        printf("Null list! Deletion not possible.");
    } else if ((*p)->next == *p) {
        free(*p);
        *p = NULL;
    } else {
        r = *p;
        while (r->next->next != *p) {
            r = r->next;
        }
        free(r->next);
        r->next = *p;
    }
}

void cdelete_anynode(node **p, int n)
{
    node *r, *s = *p;

    if (*p == NULL) {
        printf("Null list! Deletion not possible.");
    } else {
        while (s->data != n) {
            s = s->next;
        }
        r = s->next;
        while (r->next != s) {
            r = r->next;
        }
        r->next = s->next;
        free(s);
    }
}

void cdelete_nth(node **p, int pos)
{
    node *q, *r = *p;
    int i;

    if (*p == NULL) {
        printf("Null list! Deletion not possible.");
    } else if (pos == 1) {
        *p = r->next;
        free(r);
    } else {
        for (i = 0; i < pos - 2; i++) {
            r = r->next;
        }
        q = r->next;
        r->next = q->next;
        free(q);
    }
}

int main()
{
    node *head = NULL;
    int num, loc, choice;
    char opt;

    printf("Program to implement circular linked list");
    printf("\n==========================================\n");

    do {
        printf("\n1. Create appending the list.");
        printf("\n2. Insert node at beginning.");
        printf("\n3. Insert node at nth position.");
        printf("\n4. Delete first node.");
        printf("\n5. Delete last node.");
        printf("\n6. Delete node whose data matches with given data.");
        printf("\n7. Delete nth node.");
        printf("\n8. Displaying the list.");
        printf("\n9. Exit");
        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                do {
                    printf("Enter the data: ");
                    scanf("%d", &num);
                    cinsert_end(&head, num);
                    printf("Enter more data (Y/N)?: ");
                    fflush(stdin);
                    opt = getchar();
                } while (toupper(opt) != 'N');
                break;

            case 2:
                printf("Enter the data: ");
                scanf("%d", &num);
                cinsert_begin(&head, num);
                break;

            case 3:
                printf("\nEnter the node number before which node will be inserted: ");
                scanf("%d", &loc);
                printf("\nEnter the data: ");
                scanf("%d", &num);
                cinsert_nth(&head, num, loc);
                break;

            case 4:
                cdelete_beg(&head);
                break;

            case 5:
                cdelete_end(&head);
                break;

            case 6:
                printf("\nEnter the data you want to delete: ");
                scanf("%d", &num);
                cdelete_anynode(&head, num);
                break;

            case 7:
                printf("\nEnter the position which will be deleted: ");
                scanf("%d", &loc);
                cdelete_nth(&head, loc);
                break;

            case 8:
                cdisplay(head);
                break;

            case 9:
                printf("\nQuitting.....");
                exit(0);

            default:
                printf("Invalid Choice, Please enter correct choice.");
        }
    } while (1);

    return 0;
}
