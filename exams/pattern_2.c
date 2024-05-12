#include<stdio.h>
int main()
{
    int a,i,j;
    printf("Enter how many times you want:-");
    scanf("%d",&a);
    for (i=1;i<=a;++i)
    {
        for (j=1;j<=i;++j)
        {
            printf("%d,",j);
        }
        printf("\n");
    }
    int k,l;
    for (k=a;k>=1;k--)
    {
        for(l=1;l<=k;l++)
        {
            printf("%d,",l);
        }
        printf("\n");
    }
}