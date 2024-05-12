#include<stdio.h>
int main()
{
    int as,b,sum1,sum2=0,n,in1;
    printf("Enter the range = ");
    scanf("%d",&n);
    printf("Enter the assumed mean = ");
    scanf("%d",&as);
    printf("Enter the data below.(PRESS ENTER)");
    for(b=1;b<=n;b++)
    {
        scanf("%d",&in1);
        sum1=in1-as;
        sum2=sum2+sum1;
    }
    int formula=as+(sum2/n);
    printf("MEAN = %d",formula);
}