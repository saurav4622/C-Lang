//This is the version of miss's note with some modifications.
#include<stdio.h>
#include<conio.h>
int queue[5] , f=-1, r=-1;
void rear();
void front();
void show();
int main()
{
    int ch;
    int i = 1;
    //clrscr(); clrscr is not used implicitly
    printf("1.Rear\n");
    printf("2.Front\n");
    printf("3.Show\n");
    printf("4.Exit\n");
    while(i)
    {
        printf("Enter Choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: rear();
                    break;
            case 2: front();
                    break;
            case 3: show();
                    break;
            case 4: i = 0;  //Exit loop is been changed
                    break;
            default: printf("Invalid Option\n");
        }
    }
}

void rear()
{
    int item;
    if(r == 5-1)
    {
        printf("Queue is full\n");
    }
    else
    {
        if(f == -1)
        {
            f = 0;
        }
        printf("Insert element in the Queue: ");
        scanf("%d",&item);
        r = r + 1;
        queue[r]=item;
    }
}

void front()
{
    if(f == -1)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("Deleted %d",queue[f]);
        f = f + 1;
    }
}

void show()
{
    int i;
    if(f == -1)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("Queue elements in: ");
        for(i=f;i<=r;i++)
        {
            printf("%d ",queue[i]);
        }
        printf("\n");
    }
}