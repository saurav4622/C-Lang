#include<stdio.h>
int main()
{
    int range,a,sum=0;
    printf("Enter total number of inputs = ");
    scanf("%d",&range);
    printf("Enter the values of mean below.\n(press enter)");
    for(int i=1;i<=range;i++)
    {
        scanf("%d",&a);
        sum=a+sum;
    }
    printf("MEAN=%d",sum/range);
}