#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num,sum=0;
    char ch='y';
    while(ch=='y' || ch=='Y')
    {
        printf("enter any number: ");
        scanf("%d",&num);
        sum+=num;
        fflush(stdin);
        printf("enter more number?(y/n)=");
        scanf("%c",&ch);
    }
    printf("Sum = %d",sum);
}