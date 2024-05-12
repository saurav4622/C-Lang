#include<stdio.h>
#include<conio.h>

int main()
{
    int a, b, c, s = 0;
   
    printf("Enter a a:\t");
    scanf("%d", &a);
    c = a;

   // the a is reversed inside the while loop.
   while(a > 0)
   {
      b = a%10;
      s = (s*10)+b;
      a = a/10;
   }

   // here the reversed a is compared with the given a.
   if(s == c)
   {
      printf("The a %d is a palindrome", c);
   }
   else
   {
      printf("The a %d is not a palindrome", c);
   }
  getch();
}
