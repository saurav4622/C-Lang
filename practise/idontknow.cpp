#include<stdio.h>
int main()
{
    int a,b,c,i;
    printf("how many numbers would you like to enter: ");
    scanf("%d",&a);
    int arr[a];
    for (i=0;i<a;i++)
    {
        printf("Enter mobile number:-");
        scanf("%d",&arr[i]);
    }
    for (c=0;c<a;c++)
    {
        printf("%d\n",arr[c]);
    }
    printf("These are the numbers you have provided.");
}