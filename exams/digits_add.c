#include<stdio.h>
int main()
{
    int a ,b,c=0,d;
    printf("Enter your number = ");
    scanf("%d",&a);
    int e=a;
    while(a>0)
    {
        b=a%10;
        c=b+c;
        a=a/10;
    }
    printf("%d is the sum of your number %d",c,e);
}