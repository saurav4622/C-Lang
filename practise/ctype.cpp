#include<stdio.h>
#include<ctype.h>
int main()
{
	char alpha;
	printf("enter your alphabet here: ");
	scanf("%c",&alpha);
	if (islower(alpha))
	{
		printf(toupper("%c",alpha));
	}
	else
	{
		printf("%c is already in uppercase.",alpha);
	}
	return 0;
}
