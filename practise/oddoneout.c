#include<stdio.h>
int main()
{
    int a,sum,shot,even = 0,odd = 0;
    printf("Enter a number: ");
    scanf("%d",&a);
    while ( a > 0)
    {
        shot = a % 10;
        sum = shot % 2;
        if (sum == 0)
        even = shot + even;
        else
        odd = shot + odd;
        a = a / 10;
    }
    printf("\nThe addition of your numbers even and odd are : even = %d , odd = %d",even,odd);
}