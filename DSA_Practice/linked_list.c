#include<stdio.h>
#include<string.h>
struct node
{
    int number;
    char arr[50];
    float salary;
}info;

int main()
{
    struct node *ptr = &info;
    printf("Enter a number: ");
    scanf("%d",&ptr -> number);

    printf("Enter your name: ");
    scanf("%s",ptr -> arr);

    printf("Enter your salary: ");
    scanf("%f",&ptr -> salary);

    printf("\nName: %s\nNumber: %d\nSalary: %.2f",ptr -> arr,ptr -> number,ptr -> salary);
}
