// This is the chatGPT version of the miss's note.
#include <stdio.h>
#include <stdlib.h> // Required for exit function

#define SIZE 5
int queue[SIZE], f = -1, r = -1; 

void rear();
void front();
void show();

int main()
{
    int ch;
    // Removed the clrscr() call as it's not standard C

    printf("1. REAR (Enqueue)\n");
    printf("2. FRONT (Dequeue)\n");
    printf("3. SHOW\n");

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
            case 4: // Added exit case
                exit(0); // Exit the program
            default:
                printf("Invalid Choice\n");
        }
    }
}

void rear() 
{
    int item;
    if (r == SIZE - 1)
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
        r++;
        queue[r] = item;
    }
}

void front()  
{
    if(f == -1 || f > r)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Deleted %d\n", queue[f]);
        f++;

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
