#include<stdio.h>
#include<ctype.h>
void main()
{
	char in;
	printf("enter your character here: ");
	in=getchar();
	if (islower(in))
	{
		printf("your letter is in lower case");
		putchar('\n');
		printf("its reverse will be %c",toupper(in));
	}
	else
	{
		printf("your letter is in uppercase.\n");
		printf("its reverse will be %c",tolower(in));
	}

}
