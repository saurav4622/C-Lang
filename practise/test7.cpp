#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
   int a,b;
   printf("enter your number here: ");
   scanf("%d",&a);
   int len = strlen(a);
   printf("%d is your number whose length is %zu",a,len);
   return 0;   
}