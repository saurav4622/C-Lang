#include<stdio.h>
int main()
{
    int a,b,c,d=7;
    for(a=d;a>=1;a--)
    {
        for(b=1;b<=a;b++)
        {
            printf(" ");
        }
        for(c=a;c<=d;c++)
        {
            printf("%d",c);
        }
        printf("\n");
    }
}