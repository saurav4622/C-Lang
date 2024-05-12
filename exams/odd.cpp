#include<stdio.h>
int main()
{
    int odd,n;
    printf("Enter your range=");
    scanf("%d",&n);
    for(odd=1;odd<=n;odd=odd+2)
    {
        printf("%d\n",odd);
    }
}