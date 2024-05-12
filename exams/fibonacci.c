#include<stdio.h>
int main()
{
    int range,a=0,b=1,c,i;
    printf("Enter your range:-");
    scanf("%d",&range);
    if (range>=2)
    {
    printf("%d\n%d\n",a,b);
    for (i=1;i<=range-2;i++)
    { 
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;  
    }
    }
    else
    {
        printf("Error.. please enter whole number larger than 2...");
    }
   
}