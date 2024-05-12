#include<stdio.h>
int main()
{
 int i,fact=1,a;
 printf("Enter a a: ");
  scanf("%d",&a);
    for(i=1;i<=a;i++){
      fact=fact*i;
  }
  printf("Factorial of %d is: %d",a,fact);
return 0;
}
