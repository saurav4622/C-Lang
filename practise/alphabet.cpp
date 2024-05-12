#include<stdio.h>
int main()
{
	char in;
	printf("enter a single character: ");
	scanf("%c",&in);
	if ((in>='a'&&in<='z')||(in>='A' && in<='Z'))
	{
		printf("\n%c is an alphabet.",in);
	
	}
	else if(in>='0' && in<'9')
	{
		printf("\n%c is an number.",in);
		
	}
	else
	printf("\n%c is neither an alphabet nor a number.",in);
	return 0;
}
