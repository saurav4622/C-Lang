#include<stdio.h>
int main()
{
    int a,b,c,d=10;
    for (a=1;a<=d;a++)
    {
        printf("%d\t",a);
        for (b=1;b<=a;b++)
            printf("%d ",b);
        printf("\n");
    }  
}