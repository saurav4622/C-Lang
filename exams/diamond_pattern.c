#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the size of diamond = ");
    scanf("%d",&d);
    for(a=1;a<=d;a++)
    {
        for(c=d;c>=a;c--)
        {
            printf(" ");
        }
        for(b=1;b<=a;b++)
        {
            printf("%d ",b);
        }
        printf("\n");  
    }
    int e,f,g;
    for(e=d;e>=1;e--)
    {
        for(f=d;f>=e;f--)
        {
            printf(" ");
        }
        for(g=1;g<=e;g++)
        {
            printf("%d ",g);
        }
        printf("\n");
    }
}