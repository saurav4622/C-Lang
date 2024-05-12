#include<stdio.h>
int main()
{
	int in;
	char nam[500];
	printf("ENTER YOUR NAME HERE:");
	fflush(stdin);
	fgets(nam,500,stdin);
	printf("\nENTER HOW MANY TIMES YOU WANT TO PRINT YOUR NAME:");
	scanf("%d",&in);
	int i=0;
	while (i<in)
	{
		printf("\n%s",nam);
		i++;
	}
	return 0;
}
