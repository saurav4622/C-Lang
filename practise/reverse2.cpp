#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){

	char str[1000];

	printf("enter your string here: ");

	fgets(str,sizeof(str),stdin);

	int size=strlen(str),i;

	printf("%d is the size of \"%s\"",size,str);

	while (size>=0)

	{
		printf("%c",toupper(str[size]));
		size--;

	}
}
