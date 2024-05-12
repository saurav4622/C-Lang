#include<stdio.h>
int main()
{
    int a,c,d,range;
    printf("Enter range = ");
    scanf("%d",&range);
    printf("Enter number = ");
    scanf("%d",&c);
    a=c;
    d = sizeof(c);
    for(int i=d+1;i<=range;i++)
    printf("%*d\n",i,a);
}
