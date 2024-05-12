#include <stdio.h>
int main()
{
	char string[]="hello world";

	printf("%d\n",	sizeof (string)/sizeof(string[0]));
	printf("%s\n",string);
	return 0;
}
