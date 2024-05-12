#include<stdio.h>
int main()
{
	int a,b=1,c=1;
	printf("enter a a:");
	scanf("%d",&a);
	while(b<=a)
	{
		c=c*b;
		b++;
	}
	printf("\n%d is the factorial of a a %d",c,a);
	return 0;
	
}
