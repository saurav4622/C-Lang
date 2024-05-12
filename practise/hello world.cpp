#include<stdio.h>
int main()
{
	int a;
	int b;
	printf ("enter your first a:");
	scanf("%d",&a);
	printf("enter your second a:");
	scanf("%d",&b);
	int sum=a+b;
	if (a==b)
	{
		printf("%d",sum*3);
	}
	else
	{
		printf("%d",sum);
	}
	return 0;
}
