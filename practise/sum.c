#include<stdio.h>
int main()
{
    int in,sum=0,a,b,c;
    scanf("%d",&in);
    while(in>0)
    {
        a=in%10;
        sum=sum+a;
        in=in/10;
    }
    printf("%d",sum);
}