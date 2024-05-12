#include<stdio.h>
#include<string.h>
int main()
{
	int b,c,d;
	char a[5];
	printf("Enter your choice: ");
	scanf("%s",a);
	if (strcmp(a,"ch")==0)
	{
		printf("your ans is ch.");	
	}
	else if (strcmp(a,"in")==0)
	{
		printf("your ans is in");
	}
	else 
	printf("Invalid input");
}
