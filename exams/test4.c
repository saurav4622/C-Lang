#include<stdio.h>
int main()
{
    int a, b, c, d = 7;
    for (a = d; a >= 1; a--)
    {
        for (c = d; c >= a; c--)
        {
            printf(" ");
        }
        for (b = 1; b <= a; b++)
        {
            printf("%d ", b);
        }
        printf("\n");
    }
    return 0;
}
