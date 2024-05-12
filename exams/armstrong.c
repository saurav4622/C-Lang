#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int num,e,f=0,originalnum;
    printf("Enter your number = ");
    scanf("%d",&num);
    originalnum=num;
    char b[20];
    sprintf(b,"%d",num);
    int len=strlen(b);
    while(originalnum>0)
    {
        e=originalnum%10;
        f=(pow(e,len))+f;
        originalnum=originalnum/10;
    }
    if (f==num)
    {
        printf("The number is an armstrong number.");
    }
    else
    {
        printf("The number is not an armstrong number.");
    }
}
