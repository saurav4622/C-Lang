#include<stdio.h>
#include<conio.h>
int queue[5],f = -1, n = -1;
void rear();
void front();
void show();
void main()
{
    int ch;
    clrscr();
    printf("1.REAR\n");
    printf("2.FRONT\n");
    printf("3.SHOW\n");
    printf("4.EXIT\n");
    while(1)
    {
        printf("Enter your Choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:rear();
                break;
            case 2:front();
                break;
            case 3:show();
                break;
            case 4:exit(0);
                break;
            default:printf("Invalid Choice\n");
        }
    }
}
void rear()
{
    int item;
    if (r == 5-1)
    {
        printf("Queue is full\n");
    }
    else{
        if(f == -1)
        {
            f = 0;
        }
        printf("Insert Element in Queue: ");
        scanf("%d",&item);
        r = r+1;
        queue[r] = item;
    }
}
void front()
{
    if(f == -1)
    {
        printf("Queue is empty\n");
    }
    else{
        printf("Deleted %d",queue[f]);
        f = f+1;
    }
}
void show()
{
    int i;
    if(f == -1)
    printf("Queue is empty");
    else{
        printf("Queue elements in: ");
        for(i=f;i<=r;i++)
        {
            printf("%d ",queue[i]);
        }
    }
}