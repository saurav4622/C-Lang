#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter nth term: ");
    scanf("%d",&a);
    for(c=1;c<=a;c++)
    {
        if (c%10==0)
        {
            printf("%d\n",c);
        }
    }
}