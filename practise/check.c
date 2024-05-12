#include<stdio.h>
char dev(int in)
{
    if (in==1)
    printf("one");
    else if(in==2)
    printf("two");
    else if(in==3)
    printf("three");
    else if(in==4)
    printf("four");
    else if(in==5)
    printf("five");
    else if(in==6)
    printf("six");
    else if(in==7)
    printf("seven");
    else if(in==8)
    printf("eight");
    else if(in==9)
    printf("nine");
    return in;
}
int main()
{
   int in;
   printf("Enter your number: ");
   scanf("%d",&in);
   int hp=in;
   printf("%d = %s",hp,dev(in));
}
