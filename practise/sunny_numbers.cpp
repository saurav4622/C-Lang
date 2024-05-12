//All sunny numbers between 1 to n.
//the numbers n+1 is perfect square.
#include<stdio.h>
#include<math.h>
int main()
{
    int limit,i;
    double x;//sqrt(num=1)
    printf("Enter a number (upper limit):");
    scanf("%d",&limit);
    printf("Sunny numbers between 1 to %d\n",limit);
    for(i=1;i<=limit;i++)
    {
        x=sqrt(i+1);
        if((int)x==x)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}