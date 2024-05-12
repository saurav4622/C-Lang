#include<stdio.h>
int main()
{
    int a,b,c,d;
    int n;
    printf("NOTE: for better design use more than number 10\n");
    printf("Enter the size = ");
    scanf("%d",&n);
    for(a=1;a<=n;a+=2)
    {
        for(b=1;b<=a;b++)
        {
            printf(" ");
        }
        printf("* * * * * * * * * *");
        printf("\n");
    }
    for(c=n;c>=1;c-=2)
    {
        for(d=c;d>=1;d--)
        {
            printf(" ");
        }
        printf("* * * * * * * * * * ");
        printf("\n");
    }
    
}
