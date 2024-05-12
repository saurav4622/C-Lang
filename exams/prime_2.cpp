#include<stdio.h>
int main()
{
    int in,i,check,flag=0;
    printf("Enter a posivite integer: ");
    scanf("%d",&in);
    if(in==1 || in>1)
    {
        printf("Factors are:\n1\n");
        for (i=2;i<=in;i++)
        {
            check=in%i;
            if(check==0)
            {
                printf("%d\n",i);
                flag++;
            }
        }
        if(in==1)
        {
            printf("The number is co-prime");
        }
        else if(flag>1)
        {
            printf("This is a composite number. It is divisible by %d numbers",flag);
        }
        else if(flag==1)
        {
            printf("This is a prime number.");
        }
    }
    else 
    {
        printf("Error, please enter the numbers 1 or greater than 1..!!");
    }
    return 0;
}