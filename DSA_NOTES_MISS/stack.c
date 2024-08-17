#include<stdio.h>
#include<conio.h>
int stack[5], top = -1;
void push();
void pop();
void show();
int main()
{
    int ch; //for user choice
    printf("1.Push\n");
    printf("2.Pop\n");
    printf("3.Show\n");
    printf("4.Exit\n");
    while(1)
    {
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: show();
            break;
            default: printf("invalid Option");
        }
        
    }
    return 0;
}
void push()
{
    int item;
    if(top==5-1)
    {
        printf("Stack is full\n");
    }
    else
    {
        printf("Push Element in stack: ");
        scanf("%d",&item);
        top = top + 1;
        stack[top] = item;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Popped %d",stack[top]);
        top = top - 1;
    }
}
void show()
{
    int i;
    if(top >= 0)
    {
        printf("Stack element: \n");
        for(i=top;i>=0;i--)
        {
            printf("%d\n",stack[i]);
        }
    }
    else{
        printf("Stack is empty\n");
    }
}