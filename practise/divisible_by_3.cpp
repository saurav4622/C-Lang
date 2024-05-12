#include<stdio.h>
int main()
{
    int num,i,sum;
    printf("enter two digit number here: ");
    scanf("%d",&num);
    for (i=1;i<=num;i++)
    {
        if ((i%3==0) && (i%9!=0))
        {
            printf("%d\n",i);
        }
        else
        continue;
    }
    return 0;
}