#include<stdio.h>
int main()
{
    int i=1,j,d=10;
    while(i<=d)
    {
        printf("\n%d\t",i);
        j=1;
        while(j<=d)
        {
            printf("%d ",j);
            if(i==j)
            break;
            j++;
        }
        i++;
    }
}