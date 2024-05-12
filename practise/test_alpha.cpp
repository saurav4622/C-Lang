#include<stdio.h>
int main()
{
    int a=1;
    if (a<5)
    {
        a++;
        printf("%d",a);
        goto abc;
    }
    printf("%d",++a);


    abc:
    printf("%d",++a);
}