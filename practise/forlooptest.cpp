#include<stdio.h>
int main()
{
	int a,b;
	int fact;
	printf("enter a a: ");
	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
		fact=fact*b;
		printf("%d=%d\n",b,fact);
		
	}
	printf("\n%d is the factorial of %d!",fact,a);
	return 0;
}
