#include<stdio.h>
int main()
{
    int a ,b,c,d=0;
    printf("Enter your number:-");
    scanf("%d",&a);
    b=a;
    while (a>0)
    {
        c=a%10;
        d=(d*10)+c;
        a=a/10;
    }
    printf("%d",d);
}