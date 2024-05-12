#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter your range:-");
    scanf("%d",&n);
    for (i=2;i<=n;i=i+2)
    {
        printf("%d\n",i);
        sum=sum+i;
    }
    printf("%d is the sum of above series.",sum);
}