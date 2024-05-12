#include<stdio.h>
int main()
{
	int a,rem,sum;
	printf("enter a number: ");
	scanf("%d",&a);
	while(a!=0)
	{
		rem=a%10;
		sum+=rem;
		a=a/10;
	}
	printf("\nthe sum will be %d",sum);
}
