#include<stdio.h>
#include<string.h>
int main()
{
	char in[500];
	printf("enter a string here: ");
	fgets(in,in[20],stdin);
	strrev(in);
	printf("%s = reverse of your string.",in);
	
}
