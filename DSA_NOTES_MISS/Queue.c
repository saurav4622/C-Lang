#include <stdio.h>
#include <stdlib.h> // Added for exit function

int queue[5], f = -1, r = -1;  // Fixed 'n' to 'r' for rear

void rear();
void front();
void show();

int main()  // Fixed 'main' function declaration
{
    int ch;
    clrscr();  // Fixed typo: should be clrscr() not clrser()
    
    printf("1. REAR\n");
    printf("2. FRONT\n");
    printf("3. SHOW\n");
    printf("4. EXIT\n");

    while(1)
    {
        printf("Enter your Choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                rear();
                break;
            case 2:
                front();
                break;
            case 3:
                show();
                break;
            case 4:
                exit(0);  // Exit the program
            default:
                printf("Invalid Choice\n");
        }
    }
}

void rear()  // Correct function name for enqueue operation
{
    int item;
    if (r == 5 - 1)
    {
        printf("Queue is full\n");
    }
    else
    {
        if(f == -1)
        {
            f = 0;  // Initialize front if queue is empty
        }
        printf("Insert Element in Queue: ");
        scanf("%d", &item);
        r = r + 1;
        queue[r] = item;
    }
}

void front()  // Correct function name for dequeue operation
{
    if(f == -1 || f > r)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Deleted %d\n", queue[f]);
        f = f + 1;

        if(f > r)  // Reset queue when all elements are dequeued
        {
            f = r = -1;
        }
    }
}

void show()
{
    int i;
    if(f == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Queue elements are: ");
        for(i = f; i <= r; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}
