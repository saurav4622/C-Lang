#include<stdio.h>
int main()
{
    int i,div3,div5,n;
    printf("Enter your range:-");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        div3=i%3;
        div5=i%5;
        if((div3==0)||(div5==0))
        {
            printf("%d\n",i);
        }      
    }
}