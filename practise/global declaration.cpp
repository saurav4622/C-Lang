#include<stdio.h>
int a,b;
main()
{
	printf("enter your 2 variables here: \n");
	scanf("%d%d",&a,&b);
	printf("your first a is:%d\nyour second a is:%d\n",a,b);
	if (a==b)
	{
		printf("%d and %d both are equal.",a,b);
	}
	else if(a<b)
	{
		printf("%d is greater than %d",b,a);
	}
	else
	{
		printf("%d is greater than %d",a,b);
	}

}
