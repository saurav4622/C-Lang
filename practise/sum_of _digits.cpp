#include<stdio.h>
int main()
{
    int a,b,c,d=0;
    printf("enter your number here: ");
    scanf("%d",&a);
    b=a;
    while(a!=0)
    {
        c=a%10;
        d=d+c;
        a=a/10;
    }
    printf("\nThe sum of your number %d will be %d",b,d);
    return 0;
}
