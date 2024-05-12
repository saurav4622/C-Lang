#include<stdio.h>
int main()
{
	int in,i=1,z=0;
	printf("enter a a:");
	scanf("%d",&in);
	while (i<=in)
	{
		if (i%2==0)
		{
			printf("");
		}
		else
		{
			z=z+i;	
		}
		i++;
		
	}
	printf("%d is the sum.",z);
	return 0;
}
